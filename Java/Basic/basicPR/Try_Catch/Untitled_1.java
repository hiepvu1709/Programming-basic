public class Untitled_1 {
    public static void main(String[] args) {
        try
        {
            int x = 5;
            int y = 5/10;
            System.out.println("x=" +x);
            System.out.println("y=" + y);
            int z = x / y;
            System.out.println("z=" + z);
        }
        catch(Exception ex){
            System.out.println("Co loi, chi tiet: ");
            ex.printStackTrace();
        }
        System.out.println("Cam on!");
    }
}

/**
 * Cach su dung try catch nhu sau:
 * - Thu nhat: try catch dung de xu ly cac biet le trong java 
 *      tuc la khi co loi xay ra thi no tiep tuc chay phan mem ma khong cat ngang chuong trinh
 * - Thu hai: Cu phap cua try catch
 *      try
 *      {
 *          // lenh ben trong
 *      }
 *      catch(Exception ex)   // voi ex la ten bien bat ky
 *      {
 *          ex.printStackTrace();   // xuat ra chi tiet cac loi
 *      }
 */