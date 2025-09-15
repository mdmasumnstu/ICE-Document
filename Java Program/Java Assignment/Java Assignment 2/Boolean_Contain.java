import java.util.Scanner;

public class Boolean_Contain
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the main string: ");
        String mainString = scanner.nextLine();

        System.out.print("Enter the substring to search for: ");
        String subString = scanner.nextLine();

        boolean result = mainString.contains(subString);

        if (result) 
        {
            System.out.println("The main string contains the substring.");
        } 
        else 
        {
            System.out.println("The main string does NOT contain the substring.");
        }

        scanner.close();
    }
}
