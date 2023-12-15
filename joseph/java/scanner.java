//program to display 2D array from user by taking input
import java.util . *;
class scanner{
	public static void main(String[] args){
		int m,n;
		Scanner sc = new Scanner (System.in);
		System.out.println("Enter number of rows and columns: ");
		m = sc . nextInt();
		n = sc . nextInt();
		int a[][] = new int[10][10];
		int i,j;
		System.out.println("Enter elements of the array: ");
		for(i = 0;i<m;i++)
		{
			for(j = 0;j<n;j++)
			{ 
				a[i][j] = sc . nextInt();
			}
		}
		System.out.println("Values of the array are: ");
		
			for(i = 0;i<m;i++)
		{
			for(j = 0;j<n;j++)
			{
				System.out.print(a[i][j]+"\t");
			}
			System.out.println("\n");
		}

		
	}
}
		
		
		
