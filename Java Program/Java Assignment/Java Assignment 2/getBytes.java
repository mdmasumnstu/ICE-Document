public class getBytes 
{ 
    public static void main(String[] args) 
    {
        String str = "Hello, world!";

        byte[] byteArray = str.getBytes();

        System.out.println("Byte array:");
        for (byte b : byteArray) 
        {
            System.out.print(b + " ");
        }
    }
}
