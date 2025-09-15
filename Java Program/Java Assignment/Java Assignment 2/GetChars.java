import java.util.Scanner;

public class GetChars 
{
    void GetChars() 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the source string: ");
        String source = scanner.nextLine();

        System.out.print("Enter the first index: ");
        int srcBegin = scanner.nextInt();

        System.out.print("Enter the last index: ");
        int srcEnd = scanner.nextInt();

        char[] destination = new char[source.length()];

        System.out.print("Enter the destination first index: ");
        int dstBegin = scanner.nextInt();

        source.getChars(srcBegin, srcEnd, destination, dstBegin);

        // Display the result
        System.out.print("Result character array: ");
        System.out.println(destination);

        scanner.close();
    }

    public static void main(String[] args) 
    {
        GetChars obj = new GetChars();
        obj.GetChars();
    }
}
