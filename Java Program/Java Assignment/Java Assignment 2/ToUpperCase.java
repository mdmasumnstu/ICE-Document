import java.util.Scanner;

public class ToUpperCase 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        String result = input.toUpperCase();

        System.out.println("The string in uppercase is: " + result);

        scanner.close();
    }
}
