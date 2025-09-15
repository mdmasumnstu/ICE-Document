import java.util.Scanner;

public class ToString 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        String result = input.toString();

        System.out.println("The string representation is: " + result);

        scanner.close();
    }
}
