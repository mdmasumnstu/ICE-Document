import java.util.Scanner;

public class StartsWith 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        System.out.print("Enter the prefix to check: ");
        String start = scanner.nextLine();

        if (input.startsWith(start)) 
        {
            System.out.println("The string starts with this '" + start + "'.");
        } 
        else 
        {
            System.out.println("The string does not start with this '" + start + "'.");
        }

        scanner.close();
    }
}
