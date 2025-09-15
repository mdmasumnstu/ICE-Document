import java.util.Scanner;

public class codePointCount 
{
    public static void main(String[] args) 
    {
        Scanner Value = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = Value.nextLine();

        System.out.print("Enter the beginning index: ");
        int beginIndex = Value.nextInt();

        System.out.print("Enter the ending index: ");
        int endIndex = Value.nextInt();

        if (beginIndex >= 0 && endIndex <= input.length() && beginIndex < endIndex) 
        {
            int codePointCount = input.codePointCount(beginIndex, endIndex);
            System.out.println("Code Points in the range: " + codePointCount);
        } 
        else 
        {
            System.out.println("Invalid indix");
        }

        Value.close();
    }
}
