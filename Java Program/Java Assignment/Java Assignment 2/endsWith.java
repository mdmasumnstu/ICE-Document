import java.util.Scanner;

public class endsWith 
{ 

    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the main string: ");
        String mainString = scanner.nextLine();

        System.out.print("Enter the suffix to check: ");
        String suffix = scanner.nextLine();

        if (mainString.endsWith(suffix)) 
        {
            System.out.println("The string ends with the given suffix.");
        } 
        else 
        {
            System.out.println("The string does not end with the given suffix.");
        }

        scanner.close();
    }
}
