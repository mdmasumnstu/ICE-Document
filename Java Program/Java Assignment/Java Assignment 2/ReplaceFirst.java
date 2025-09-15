import java.util.Scanner;

public class ReplaceFirst 
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

        String result = input.replaceFirst(regex, replacement);

        System.out.println("The string after first replacement: " + result);

        scanner.close();
    }
}
