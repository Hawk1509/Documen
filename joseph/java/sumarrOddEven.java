//prorgam to find the sum of te odd and even numbers in an array
import java.util.*;
class sumarrOddEven{
	public static void main(String [] args){
		int sumOdd = 0,sumEven = 0 ;
		int a[] = new int[10];
		int i = 0,lim;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Elements a limit");
		lim = sc.nextInt();
		System.out.println("Enter Elements of the Array: ");
		for( i=0;i<lim;i++)
		{
			a[i] = sc.nextInt();
		}
		for( i=0;i<lim;i++)
		{
			if(a[i] % 2 == 0)
			{
				sumEven += a[i];
			}
			else
			{
				sumOdd += a[i];
			}
		}
		System.out.println("The sum of the Even numbers are: " +sumEven);
		System.out.println("The sum of the Odd numbers are: " +sumOdd);
		}
	}
