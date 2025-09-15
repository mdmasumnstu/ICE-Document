import java.util.Scanner;

public class IsEmpty 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        if (input.isEmpty()) 
        {
            System.out.println("The string is empty.");
        } 
        else 
        {
            System.out.println("The string is not empty.");
        }

        scanner.close();
    }
}
