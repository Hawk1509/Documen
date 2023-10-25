//Program to display the smallest and largets element in an array
import java.util.*;
class smlLarg{
	public static void main(String[] args){
		int a,i = 0,l = 0,s = 0;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a limit: ");
		a = sc.nextInt();
		int arr[] = new int[a];
		System.out.println("Enter elemnts of the array: ");
		for (i=0;i<a;i++)
		{
			arr[i] = sc.nextInt();
		}
		//l = arr[0];
		for (i=0;i<a;i++)
		{
			if (arr[i] > l)
			{	
				l = arr[i];
			}
		}
		s = arr[0];
		for (i=0;i<a;i++)
		{
			if (s > arr[i])
			{	
				s = arr[i];
			}
		}
		

		System.out.println("The largest element is: "+l);
		System.out.println("The smallest element is: "+s);
		
	}
}
/*
Enter a limit: 
4
Enter elemnts of the array: 
1
2
3
4
The largest element is: 4
The smallest element is: 1
*/
		
