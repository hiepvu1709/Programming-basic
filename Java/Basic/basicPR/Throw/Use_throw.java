public class Use_throw {
    public static void ptb1(int a, int b) throws Exception
    {
        try {
            System.out.println("x=" + (-b / a));
        } catch (Exception ex) {
            throw ex;
        }
    }
    public static void main(String[] args) {
        ptb1(0,5 );
    }
}

/**
 *  Cach hieu don gian: trong mot ham nao do co xay ra loi nhung khong xu ly loi
 *      bo no ra cho nao do, thi cho nao do xu ly cai ham nay thi phai xu ly loi do
 * Cach hieu chi tiet:
 *  Vi du co 1 ham nhu sau:
 *      public static void func() throws Exception
 *      {
 *          try
 *          {
 *              // code
 *          }
 *          catch(Exception ex)
 *          {
 *              throw ex;
 *          }
 *      }
 * neu xay ra mot loi nao do trong ham nay thi se k xu ly ma nen cai loi do den dau do
 * 
 * nhung cho nao goi ham so phai co try catch
 */