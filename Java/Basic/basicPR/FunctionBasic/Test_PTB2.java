import java.util.Scanner;

public class Test_PTB2 {
    /**
     * Hàm giải phương trình bậc 2
     * @param a - hệ số a
     * @param b - hệ số b
     * @param c - hệ số c
     */
    public static void giaiPTB2(double a, double b, double c)
    {
        if(a==0)
        {
            System.out.println("Phuong trinh tro thanh bac 1\n");
            if(b==0 && c==0)
            {
                System.out.println("Phuong trinh vo so nghiem\n");
            }
            else if(b == 0 && c!= 0)
            {
                System.out.println("Phuong trinh vo nghiem\n");
            }
            else {
                System.out.println("Phuong trinh co nghiem " + (-b/c));
            }
        }
        else {
            double dental = b * b - 4 * a * c;
            if(dental < 0)
            {
                System.out.println("Phuong trinh vo nghiem");
            }
            else if(dental == 0)
            {
                System.out.println("Phuong trinh co nghiem kep x1=x2= "+(-b/2*a));
            }else 
            {
                double x1 = (-b-Math.sqrt(dental))/2*a;
                double x2 = (-b+Math.sqrt(dental))/2*a;
                System.out.println("Phuong trinh co 2 nghiem phan biet x1 =" + x1 + ", x2= " + x2);
            }
        }
    }
    public static void main(String[] args) {
        System.out.println("\nGIAI PHUONG TRINH BAC HAI");
        Scanner sc = new Scanner(System.in);

        do{
            System.out.println("\tNhap he so a: ");
            double a = sc.nextDouble();

            System.out.println("\tNhap he so b: ");
            double b = sc.nextDouble();

            System.out.println("\tNhap he so c: ");
            double c = sc.nextDouble();

            giaiPTB2(a, b, c);
            System.out.println("Ban co muon tiep tuc khong? (c/k): ");
            String line = sc.nextLine();
            if (line.equalsIgnoreCase("k"))
                break;
        } while (true);
        System.out.println("\tCam on ban da dung phan mem!");
    }
}
