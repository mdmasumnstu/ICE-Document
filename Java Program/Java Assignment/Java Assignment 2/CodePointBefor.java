import java.util.Scanner;

public class CodePointBefor 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        System.out.print("Enter an index: ");
        int index = scanner.nextInt();

        if (index > 0 && index <= input.length()) 
        {
            int codePoint = input.codePointBefore(index);
            System.out.println("Code Point Before Index " + index + ": " + codePoint);
        } else {
            System.out.println("Invalid index!");
        }

        scanner.close();
    }
}
