import java.util.Scanner;

class Transpose {
    public static void main(String[] args) {
        int r, c, i, j;
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter number of rows: ");
        r = sc.nextInt();
        System.out.println("Enter number of columns: ");
        c = sc.nextInt();
        
        int a[][] = new int[r][c];
        int b[][] = new int[c][r];
        
        System.out.println("Enter elements of matrix A: ");
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                System.out.print("Enter value of A[" + (i+1) + "][" + (j+1) + "]: ");
                a[i][j] = sc.nextInt();
            }
        }

        // Transpose the matrix
        for (j = 0; j < c; j++) {
            for (i = 0; i < r; i++) {
                b[j][i] = a[i][j];
            }
        }

        // Display the transpose matrix
        System.out.println("Transpose is: ");
        for (i = 0; i < c; i++) {
            for (j = 0; j < r; j++) {
                System.out.print(b[i][j] + " ");
            }
            System.out.println(); // Move to the next row in the transpose matrix
        }
    }
}
