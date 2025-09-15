import java.util.Scanner;

public class Intern 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        String internString = input.intern();

        String referenceString = "Hello";

        if (internString == referenceString) 
        {
            System.out.println("The interned string matches the reference string in the string pool.");
        } 
        else 
        {
            System.out.println("The interned string does not match the reference string.");
        }

        scanner.close();
    }
}
