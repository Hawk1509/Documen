#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
	 int data;
	 struct node *lchild;
	 struct node *rchild;
 }*ptr,*ptr1,*ptr2,*new,*root=NULL,*ptrz,*successorNode,*child,*successorParent;
 void insert()
 { 
 int item;
 new=(struct node*)malloc (sizeof(struct node));
 printf("enter the item to be inserted\n");
 scanf("%d",&item);
 new->data=item;
 new->lchild=NULL;
 new->rchild=NULL;
if (root==NULL)
{
    root=new;
}
else {	 
    ptr=root;
	while(ptr!=NULL)
	{
     	ptr1=ptr;
 		if (item<ptr->data)
	 	{	
		    ptr=ptr->lchild;
 		}
	 	else if (item>ptr->data)
		{ 			
	    	ptr=ptr->rchild;
		}	
	}
	if(ptr1->data>item)
    {
		ptr1->lchild=new;			
	}
	else
    {
		ptr1->rchild=new;		
	}	
	}
}	
struct node *successor(struct node * ptr)
{
    ptr2 = ptr -> rchild;
    while (ptr2 -> lchild != NULL && ptr2!= NULL)
    {
        ptr2 = ptr2 -> lchild;
    }
    return ptr2;
}

void display(struct node*ptr)
{
   	if(ptr==NULL)
   	return;
   	display(ptr->lchild);
   	printf("%d\t",ptr->data);
   	display(ptr->rchild);  	
}
void deleteNode(int item) {
    int f = 0;
    if (root == NULL) {
        printf("Tree is empty\n");
    } else {
        ptr = root;
        ptr1 = NULL;
        while (ptr != NULL && f == 0) {
            if (item < ptr->data) {
                ptr1 = ptr;
                ptr = ptr->lchild;
            } else if (item > ptr->data) {
                ptr1 = ptr;
                ptr = ptr->rchild;
            } else if (item == ptr->data) {
                f = 1;
                break;
            }
        }
        if (f == 0) {
            printf("Element not found\n");
        } else {
            if (ptr->lchild == NULL && ptr->rchild == NULL) { // case 1
                if (ptr1 == NULL) {
                    // Deleting the root when it has no children
                    root = NULL;
                } else if (ptr == ptr1->lchild) {
                    ptr1->lchild = NULL;
                } else {
                    ptr1->rchild = NULL;
                }

                printf("The element deleted is %d\n", ptr->data);
                free(ptr);
            } else if ((ptr->lchild != NULL && ptr->rchild == NULL) || (ptr->rchild != NULL && ptr->lchild == NULL)) {
                // case 2
                child = (ptr->lchild != NULL) ? ptr->lchild : ptr->rchild;

                if (ptr1 == NULL) {
                    // Deleting the root with one child
                    root = child;
                } else if (ptr == ptr1->lchild) {
                    ptr1->lchild = child;
                } else {
                    ptr1->rchild = child;
                }

                printf("The element deleted is %d\n", ptr->data);
                free(ptr);
            } else if (ptr->lchild != NULL && ptr->rchild != NULL) { // case 3
                successorParent = ptr;
                successorNode = ptr->rchild;

                while (successorNode->lchild != NULL) {
                    successorParent = successorNode;
                    successorNode = successorNode->lchild;
                }
                ptr->data = successorNode->data;
                // Now, delete the successor node
                if (successorParent == ptr) {
                    successorParent->rchild = successorNode->rchild;
                } else {
                    successorParent->lchild = successorNode->rchild;
                }

                free(successorNode);
            }
        }
    }
}
 void main()
 {
  int c=0;
 	do{
  		printf("\nenter the choise\n(1)-insert\n(2)-display\n(3)delete\n(0)-exit\n");
  		scanf("%d",&c);
  		switch(c)
  		{
  			 case 1:
  			 insert();
  			 break;
  			 
  			 case 2:
  			 display(root);
  			 break;
  			 
  			 case 3:
             int item;
                printf("Enter the element to delete: ");
                scanf("%d", &item);
  			 deleteNode(item);
  			 break;
  		
  		
  		}
  	
  	}while(c!=0);
 }
 /*
 OUTPUT
 enter the choise
(1)-insert
(2)-display
(3)delete
(0)-exit
1
enter the item to be inserted
9

enter the choise
(1)-insert
(2)-display
(3)delete
(0)-exit
1
enter the item to be inserted
11

enter the choise
(1)-insert
(2)-display
(3)delete
(0)-exit
1
enter the item to be inserted
7

enter the choise
(1)-insert
(2)-display
(3)delete
(0)-exit
1
enter the item to be inserted
4

enter the choise
(1)-insert
(2)-display
(3)delete
(0)-exit
1
enter the item to be inserted
1

enter the choise
(1)-insert
(2)-display
(3)delete
(0)-exit
1
enter the item to be inserted
5

enter the choise
(1)-insert
(2)-display
(3)delete
(0)-exit
2
1       4       5       7       9       11
enter the choise
(1)-insert
(2)-display
(3)delete
(0)-exit
3
Enter the element to delete: 1
The element deleted is 1

enter the choise
(1)-insert
(2)-display
(3)delete
(0)-exit
2
4       5       7       9       11
enter the choise
(1)-insert
(2)-display
(3)delete
(0)-exit
3
Enter the element to delete: 5
The element deleted is 5

enter the choise
(1)-insert
(2)-display
(3)delete
(0)-exit
2
4       7       9       11
enter the choise
(1)-insert
(2)-display
(3)delete
(0)-exit
1
enter the item to be inserted
1

enter the choise
(1)-insert
(2)-display
(3)delete
(0)-exit
1
enter the item to be inserted
5

enter the choise
(1)-insert
(2)-display
(3)delete
(0)-exit
2
1       4       5       7       9       11
enter the choise
(1)-insert
(2)-display
(3)delete
(0)-exit
3
Enter the element to delete: 4

enter the choise
(1)-insert
(2)-display
(3)delete
(0)-exit
2
1       5       7       9       11
enter the choise
(1)-insert
(2)-display
(3)delete
(0)-exit
0
*/
