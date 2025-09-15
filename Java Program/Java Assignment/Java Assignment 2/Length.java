import java.util.Scanner;

public class Length 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        int length = input.length();
        System.out.println("The length of the string is: " + length);

        scanner.close();
    }
}
