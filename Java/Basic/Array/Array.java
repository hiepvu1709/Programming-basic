import java.util.Scanner;

public class Array {
    public static void main(String[] args)
    {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Please enter the number of elements in the array: ");
            int n = sc.nextInt();
            int[] a = new int[n];

            System.out.print("\nEnter elements: ");
            for(int i=0 ; i<n ; i++)
            {
                a[i] = sc.nextInt();
            }

            System.out.print("\nThe sum of the first and the last element is: " + (a[0] + a[n-1]));

            System.out.print("\nThe largest element is ");
            int maxValue = a[0];
            for(int i=1 ; i<n ; i++)
            {
                if(a[i] > maxValue)
                {
                    maxValue = a[i];
                }
            }
            System.out.print(maxValue);

            System.out.print("\nThe even elements in the array are ");
            for(int i=0 ; i<n ; i++)
            {
                if(a[i] % 2 == 0)
                {
                    System.out.print(a[i] + " ");  
                }
            }

            System.out.print("\nPlease enter any integer value: "); 
            int k = sc.nextInt(); 
            int count = 0;
            for(int i=0 ; i<n ; i++)
            {
                if(a[i] == k)
                {
                    count++;
                }
            }
            System.out.print("The number " + k + " appears " + count + " times."); 

            for(int i=0 ; i<n ; i++)
            {
                for(int j=i+1 ; j<n ; j++)
                {
                    if(a[i] > a[j])
                    {
                        int temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;
                    }
                }
            }
            System.out.print("\nThe elements are sorted in ascending order as follows: "); 
            for(int i=0 ; i<n ; i++)
            {
                System.out.print(a[i] + " ");  
            }

            System.out.print("\nEnter column: ");  
            int c = sc.nextInt();
            System.out.print("Enter raw: ");
            int h = sc.nextInt();
            int[][] arr = new int[c][h];
            int sumMatrix = 0;
            System.out.print("\nEnter elements: ");  
            for(int i=0 ; i<c ; i++)
            {
                for(int j=0 ; j<h ; j++)
                {
                    System.out.print("\n["+(i+1)+"]"+"["+(j+1)+"]"+"=");  
                    arr[i][j] = sc.nextInt();
                }
            }
            System.out.print("Sum of elements in the matrix divisor 5 is ");
            for(int i=0 ; i<c ; i++)
            {
                for(int j=0 ; j<h ; j++)
                {
                    if(arr[i][j] % 5 == 0)
                    {
                        sumMatrix += arr[i][j];
                    }
                }
            }
            System.out.print(sumMatrix);
        }
    }
}
