import java.util.Scanner;

public class ReplaceAll 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        System.out.print("Enter the regular expression to match: ");
        String regex = scanner.nextLine();

        System.out.print("Enter the replacement string: ");
        String replacement = scanner.nextLine();

        String result = input.replaceAll(regex, replacement);

        System.out.println("The string after replacement: " + result);

        scanner.close();
    }
}
