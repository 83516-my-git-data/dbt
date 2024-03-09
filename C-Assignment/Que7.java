public class Que7
{
    public static void main(String args[])
    {
        int n = Integer.parseInt(args[0]);
        System.out.println("Table of "+n);
        for(int i=1 ; i<=10 ; i++)
        {
            System.out.println(+(i*n));
        }
    }
}
//java Que7.java ==> compile
//java Que7 2 ==> execution // 2 ==> argument