import java.text.DecimalFormat;

public class Use_dcf {
    public static void main(String[] args) {
        double x = 1.0 / 3;
        DecimalFormat dcf = new DecimalFormat("#.##");  // dinh dang, dang sau dau cham bao nhieu # thi khi in ra bay nhieu so
        System.out.println("x="+dcf.format(x));
    }
}

/**
 * DecimalFormat dung de dinh dang du lieu so de xuat ra ben ngoai cho dep
 * 
 */