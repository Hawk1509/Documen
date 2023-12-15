//Menu driven program to develop a calculator using switch
import java.util.*;
class calSwitch{
	public static void main(String[] arg){
		int a,b,s;
		char opr,ch='y';
		Scanner sc = new Scanner (System.in);
		System.out.println("Enter 1st number: ");
		a = sc.nextInt();
		System.out.println("Enter 2nd number: ");
		b = sc.nextInt();
		while (ch == 'y'){
		System.out.println("Enter operation \n + \n - \n * \n / \n: ");
		opr = sc.next().charAt(0);
		switch (opr)
		{
			case '+': s = a + b;
				System.out.println("The Sum is: "+s);
				break;
			case '-': s = a - b;
				System.out.println("The Difference is: "+s);
				break;
			case '*': s = a * b;
				System.out.println("The Product is: "+s);
				break;
			case '/': s = a / b;
				System.out.println("The Result is: "+s);
				break;
			default:
			System.out.println("Invalid Operator.\n");
			break;
		}
		System.out.print("Do you want to continue (y/n)? ");
		ch = sc.next().charAt(0);
		}
	}
}

/* 
						OUTPUT
Enter 1st number: 
10
Enter 2nd number: 
5
Enter operation 
 + 
 - 
 * 
 / 
: 
+
The Sum is: 15
Do you want to continue (y/n)? y
Enter operation 
 + 
 - 
 * 
 / 
: 
-
The Difference is: 5
Do you want to continue (y/n)? y
Enter operation 
 + 
 - 
 * 
 / 
: 
*
The Product is: 50
Do you want to continue (y/n)? y
Enter operation 
 + 
 - 
 * 
 / 
: 
/
The Result is: 2
Do you want to continue (y/n)? n
*/
	

