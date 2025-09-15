import java.util.Scanner;

public class boolean_content_equal 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String userInput = scanner.nextLine();

        System.out.print("Enter another string for compare: ");
        StringBuilder another= new StringBuilder(scanner.nextLine());

        if (userInput.contentEquals(another)) 
        {
            System.out.println("Strings are equal.");
        } 
        else 
        {
            System.out.println("Strings are NOT equal.");
        }

        scanner.close();
    }
}
