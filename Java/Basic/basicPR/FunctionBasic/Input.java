import java.util.Scanner;
import java.lang.String;

public class Input {
    /**
     *  Hàm tính các phép toán logic cơ bản
     * 
     * @param a - số thứ nhất
     * @param b - số thứ hai
     */
    public static void Logic(int a, int b) {
        System.out.println("a + b = " + (a + b));
        System.out.println("a - b = " + (a - b));
        System.out.println("a * b = " + (a * b));
        System.out.println("a / b = " + (a / b));
        System.out.println("a % b = " + (a % b));
    }

    /**
     * Hàm tìm ra vị trí điểm vừa nhập vào thuộc góc phần tư nào
     * 
     * @param x - hoành độ
     * @param y - tung độ
     */
    public static void Point(int x, int y) {
        if (x >= 1 && y >= 1) {
            System.out.println("This point lies in the First quadrant");
        } else if (x <= -1 && y >= 1) {
            System.out.println("This point lies in the Second quadrant");
        } else if (x <= -1 && y <= -1) {
            System.out.println("This point lies in the Third quadrant");
        } else if (x >= 1 && y <= -1) {
            System.out.println("This point lies in the Fourth quadrant");
        }
    }

    /**
     * Ham tinh phep toan S(n,x) = x + (x^2)/1+2 + (x^3)/1+2+3 + ... +(x^n)/1+2+3+...+n
     * @param n - la so mu , pham vi tu 1 den n
     * @param x - la co so
     */
    public static double tinhS(int n, int x)
    {
        double s = 0;
        double mau = 0;
        for(int i=1 ; i<=n; i++)
        {
            double tu = Math.pow(x, i);
            mau = mau + i;
            s = s + tu / mau;
        }
        return s;
    }
    public static void main(String[] args) {

        /*
         * để nhập dữ liệu đầu vào thì gõ scan rồi nhấn enter
         * khi đó packet trong java sẽ cập nhật thư viện nhập sữ liệu cho ta
         * sau khi gõ xong , bạn đặt tên cho scanner ví dụ là sc
         * rồi = new Scanner(System.in)
         * trong thư viện io thì system.in là nhập vào, system.out là xuất ra màn hình
         */
        Scanner sc = new Scanner(System.in);

        // print là in trên 1 dòng
        System.out.print("Please enter your name: ");

        // để nhập thì ta chỉ cần gõ [kiểu dữ liệu] tên biến = đối tượng Scanner.(nhập
        // dữ liệu có kiểu đã khai báo)
        /*
         * ví dụ
         * + kiểu dữ liệu số nguyên: int a = sc.nextInt();
         * + kiểu ------- số thực: float a = sc.nextFloat();
         * + ------------ chuỗi: String name = sc.nextLine();
         * +
         */
        String name = sc.nextLine();

        // println là in xuống dòng
        System.out.println("Hello " + name);

        System.out.print("\nPlease enter your age: ");
        int age = sc.nextInt();
        System.out.println("Your age: " + age);

        System.out.print("\nPlease enter your gpa: ");
        double gpa = sc.nextDouble();
        System.out.println("Your gpa: " + gpa);

        System.out.print("\nPlease enter your address: ");
        String address = sc.next();
        System.out.println("Your address: " + address);

        System.out.print("\nPlease enter values a,b: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        Logic(a, b);    // goi ham da tao o ngoai ham main vao trong ham main

        int e = a;
        a = b;
        b = e;
        System.out.println("\nAfter swapping : a = " + a + " ,b = " + b);       // hoan vi hai so

        System.out.print("\nPlease enter one character: ");     // nhap vao mot ky tu
        char g = (char) (sc.next().charAt(0) + 1);
        System.out.println("The next character is " + g);           // ky tu tiep theo cua ky tu do

        System.out.print("\nPlease enter value n: ");
        int n = sc.nextInt();
        if (n % 2 == 0) {
            System.out.println(n + " is an even number.");          // la so chan
        } else {
            System.out.println(n + " is an odd number.");           // la so le
        }

        System.out.print("\na = " + a + " ,b = " + b + " ,n = " + n + ", the max number is ");      // so lon nhat trong 3 so
        System.out.println(Math.max(Math.max(a,b),n));

        System.out.print("\nPlease enter point coordinates: ");// nhap toa do diem,ktr xem thuoc goc phan tu nao
        System.out.print("\nx = ");
        int x = sc.nextInt();
        System.out.print("y = ");
        int y = sc.nextInt();
        Point(x, y);

        System.out.print("\nThe numbers 1 to 5 are: ");     // cac so tu 1 den 5
        int sum = 0;                                           // khoi tao bien sum de luu tru tong cac so tu 1 den 5
        for (int i = 1; i <= 5; i++) {
            System.out.print(i + " ");
            sum += i;
        }
        System.out.print("\nSum of numbers is " + sum);

        System.out.print("\nWrite a matrix of five columns and five rows");     // tao ma tran voi 5 cot va 5 hang
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                System.out.print(i * 5 + j + " ");
            }
            System.out.println();
        }

        System.out.print("\nEven numbers from " + n + " to 100 are ");      // cac so chan tu n den 100 
        while (n <= 100) {
            if (n % 2 == 0) {
                System.out.print(n + " ");
            }
            n += 1;
        }

        System.out.print("\nAll divisor of n is ");         // cac uoc so cua n
        int i = 1;
        int count = 0;
        while (i <= n) {
            if (n % i == 0) {
                count++;
            }
            i++;
        }
        System.out.println(count);

        System.out.println("Moi nhap so mu m: ");
        int m = sc.nextInt();
        System.out.println("Moi nhap co so X: ");
        int X = sc.nextInt();
        System.out.println("Tong S = " + tinhS(m,X));
    }
}