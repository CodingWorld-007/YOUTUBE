import java.util.Scanner;

public class Matrixmultiply {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the row of Matrix 1 : ");
        int row1 = sc.nextInt();
        System.out.println("Enter the column of Matrix 1 : ");
        int col1 = sc.nextInt();
        System.out.println("Enter the row of Matrix 2 : ");
        int row2 = sc.nextInt();
        if(row2 != col1)
        {
            System.out.println("Column of Matrix 1 and Row of Matrix 2 must be Equal");
            return ;
        }
        System.out.println("Enter the column of Matrix 2 : ");
        int col2 = sc.nextInt();

        int[][] M1 = new int[row1][col1];
        int[][] M2 = new int[row2][col2];

        int[][] R = new int[row1][col2];

        System.out.println("Enter the Values of Matrix 1 : ");
        for(int i=0; i<row1; i++)
        {
            for(int j=0; j<col1; j++)
            {
                M1[i][j] = sc.nextInt();
            }
        }

        System.out.println("Enter the Values of Matrix 2 : ");
        for(int i=0; i<row2; i++)
        {
            for(int j=0; j<col2; j++)
            {
                M2[i][j] = sc.nextInt();
            }
        }

        for(int i=0; i<row1; i++)
        {
            for(int j=0; j<col2; j++)
            {
                for(int k=0; k<col1; k++) // K can be anyhting either col1 or row2
                {
                    R[i][j] += M1[i][k] * M2[k][j];
                }
            }
        }
        System.out.println("Resultant Matrix is : ");
        for(int i=0; i<row1; i++)
        {
            for(int j=0; j<col2; j++)
            {
                System.out.print(R[i][j] + " ");
            }
            System.out.println("");
        }

    }
}

