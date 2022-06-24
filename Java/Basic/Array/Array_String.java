import java.util.Scanner;
public class Array_String {
    public static void main(String[] args)
    {
        // tim ky tu o vi tri
        try(Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter string: ");
            String s = sc.next();
            System.out.print("\nEnter the position of the character you want to find: ");
            int k = sc.nextInt();
            System.out.print("The character you want to find is " + s.charAt(k - 1));

            // tim vi tri cua ky tu
            char c = sc.next().charAt(0);
            int position = 0;
            for(int i=0 ; i<s.length() ; i++)
            {
                if(s.charAt(i) == c)
                {
                    position++;
                }
            }
            System.out.print(position);

            // kt ky tu do co o (.) chuoi k
            // neu co thi in ra so lan xuat hien cua ky tu do
            // neu k thi in ra -1 tuc la false
            int answer = -1;
            for (int i = 0; i < s.length(); i++) 
            {
            	if (s.charAt(i) == c) 
                {
            		answer = i;
            		break;
            	}
            }
            System.out.print(answer);

            System.out.println("Cod3l3arn".replace('3', 'e')); // thay the
		    System.out.println("Blackcat".replace("Black", "White"));

            String a = "CoDeLeArN";
		    System.out.println(a.toUpperCase()); // viet hoa
		    System.out.println(a.toLowerCase()); // viet thuong

            String d = "Codelearn";
            System.out.println(d.indexOf("learn"));//tra ve vtri bdau of lan xhien dau tien of chuoi 1 (.) chuoi 2 
            System.out.println(d.indexOf("black"));// tra lai -1 neu chuoi 1 k co (.) chuoi 2

            String name = "Codelearn";
            System.out.println(name.startsWith("Code"));//ktra xem chuoi co bat dau = tien to chi dinh k
            System.out.println(name.startsWith("abc"));//tuc la co bat dau bang chu cai dau tien cua chuoi k
            System.out.println(name.endsWith("rn"));//ktra xem co ket thuc bang hau to chi dinh k
            System.out.println(name.endsWith("z"));// dung tra true sai tra false

            String e = "Welcome to codelearn!";
            String[] words = e.split(" ");//phuong thuc chia tach chuoi thanh 1 mang cac chuoi con
                for(String word:words) 
                {
			        System.out.println(word);
		        }

            int lower = 0;
            for (int i = 0; i < s.length(); i++) 
            {
                if (s.charAt(i) >= 'A' && s.charAt(i) <= 'Z') 
                {
                    lower++;
                }
            }
            System.out.print(lower); // in ra co bao nhieu chu cai viet hoa
        }
    }
}
