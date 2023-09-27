//program to add two arrays
import java.util . *;
class array_add{
	public static void main(String[] args)
	{
		int r,c;
		System.out.println("Enter number of rows and columns: ");
		Scanner sc = new Scanner(System.in);
		r = sc.nextInt();
		c = sc.nextInt();
		int a[][] = new int[10][10];
		int b[][] = new int[10][10];
		int d[][] = new int[10][10];
		System.out.println("Enter values of Matrix A");
		for(int i = 0;i<r;i++)
		{
			for(int j = 0;j<c;j++)
			{
				a[i][j] = sc.nextInt();
			}
		}
		System.out.println("Values of Matrix A are: ");
		for(int i = 0;i<r;i++)
		{
			for(int j = 0;j<c;j++)
			{
				System.out.print(a[i][j]+"\t");
			}
			System.out.print("\n");
		}		
		System.out.println("Enter values of Matrix B: ");
		for(int i = 0;i<r;i++)
		{
			for(int j = 0;j<c;j++)
			{
				b[i][j] = sc.nextInt();
			}
		}
		System.out.println("Values of Matrix B are: ");
		for(int i = 0;i<r;i++)
		{
			for(int j = 0;j<c;j++)
			{
				System.out.print(b[i][j]+"\t");
			}
			System.out.print("\n");
		}
		System.out.println("Sum of the two matrix.");
		for(int i = 0;i<r;i++)
		{
			for(int j = 0;j<c;j++)
			{
				d[i][j] = a[i][j] + b[i][j];
				System.out.print(d[i][j]+"\t");
			}
			System.out.print("\n");
		}
	}
}				
		
		
