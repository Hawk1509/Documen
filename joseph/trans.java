//program to display transpose of a matrix
class trans
{
	public static void main(String[] args)
	{
		int a[][] = new int[10][10];
		int b[][] = new int[10][10];
		int i,j;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number of rows and columns: ");
		r = sc.nextInt();
		c = sc.nextInt();
		for (i = 0;i<r;i++)
		{
			for(j = 0;j<c;j++)
			{
				System.out.println("Enter value of matrix A"+i+1 +j+1);
				a[i][j] = sc.nextInt();
			}
		}
		System.out.println("Transpose is: ");
		for (j = 0;j<r;j++)
		{
			for(i = 0;i<r;i++)
			{
				b[j][i] = a[i][j] ;
			}
		}
		
		for (i = 0;i<c;i++)
		{
			for(j = 0;j<r;j++)
			{
				System.out.println(+b[i][j]);
			}
		}
	}
}
