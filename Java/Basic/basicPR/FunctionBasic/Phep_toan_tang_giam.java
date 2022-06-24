public class Phep_toan_tang_giam {
    public static void main(String[] args) {
        int x = 8;
        int y = 2;
        int z = x++ + ++y - 5;
        System.out.println(z);
        System.out.println(x);
        System.out.println(y);
    }
}

/*
 * Ở đây là phép toán tăng dần ++ và giảm dần --
 * 
 * (++x) hay (--y) goi la prefix
 * (x++) hay (y--) goi la postfix
 * 
 * Cac buoc hoat dong cua truong hop bien z ben tren
 * Bước 1: ưu tiên xử lý Prefix trước : y = 3
 * Bước 2: Tính toán các phép toán còn lại: 8 + 3 -5 = 6
 * Bước 3: gán giá trị ở bước 2 cho vế trái : z = 6
 * Bước 4: thực hiện postfix : x = 9
 */