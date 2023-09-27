//program to multiply two matrix
import java.util.*;
class mat_mul{
	public static void  main(String[] arg){
	int a[][] = new int[10][10];
	int b[][] = new int[10][10];
	//int c[][] = new int[10][10];
	int d[][] = new int[10][10];
	int r,c,i,j,k,r1,c1;
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter number of rows and columns of matrix A: ");
	r = sc.nextInt();
	c = sc.nextInt();
	System.out.println("Enter number of rows and columns of matrix B: ");
	r1 = sc.nextInt();
	c1 = sc.nextInt();
	if (c != r1)
	{
		System.out.println("Multiplication not possible");
	}
	else
	{
		System.out.println("Enter values of Matrix A");
		for(i = 0;i<r;i++)
		{
			for(j = 0;j<c;j++)
			{
				a[i][j] = sc.nextInt();
			}
		}
		System.out.println("Values of Matrix A are: ");
		for(i = 0;i<r;i++)
		{
			for(j = 0;j<c;j++)
			{
				System.out.print(a[i][j]+"\t");
			}
			System.out.print("\n");
		}		
		System.out.println("Enter values of Matrix B: ");
		for(i = 0;i<r1;i++)
		{
			for(j = 0;j<c1;j++)
			{
				b[i][j] = sc.nextInt();
			}
		}
		System.out.println("Values of Matrix B are: ");
		for(i = 0;i<r1;i++)
		{
			for(j = 0;j<c1;j++)
			{
				System.out.print(b[i][j]+"\t");
			}
			System.out.print("\n");
		}
		System.out.println("Product of the two matrix.");
		for(i = 0;i<r;i++)
		{
			for( j = 0;j<c1;j++)
			{
				for(k = 0;k<c;k++)
				{
					d[i][j] += a[i][k] * b[k][j];
					
				}
				System.out.print(d[i][j]+"\t");
			}
			System.out.print("\n");
		}
		}
	}			
	
}
