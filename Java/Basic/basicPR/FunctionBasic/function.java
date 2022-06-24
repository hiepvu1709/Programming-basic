public class function {
    public static void main(String[] args) {
        System.out.println(Math.max(5, 10)); 
        System.out.println(Math.min(5, 10));
        System.out.println(Math.sqrt(64));
        System.out.println(Math.abs(-10));
        System.out.println(Math.random()); // so ngau nhien

        String name = "Vu Xuan Hiep";
        System.out.println(name.toUpperCase()); // viet hoa
        System.out.println(name.toLowerCase()); // viet thuong

        String txt1 = "Vu Xuan ";
        String txt2 = "Hiep";
        System.out.println(txt1.concat(txt2)); // nối 2 text
    }
}
/* 
 *de dung duoc ham max hay bat ky ham nao trong thu vien Math 
 * ta go nhu sau Math.max() hoac Math.min()
*/