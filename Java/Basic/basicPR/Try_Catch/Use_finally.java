public class Use_finally {
    public static void main(String[] args) {
        try {
            int x = 5;
            int y = 1;
            int z = x / y;
            System.out.println("z=" + z);
            System.out.println("Xin cam on!");
        } catch (Exception ex) {
            ex.printStackTrace();
        }
        finally
        {
            System.out.println("Troi sap ta van chay!");
        }
    }
}
