import java.util.Scanner;

public class ValueOfBool
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a boolean value (true/false): ");
        boolean input = scanner.nextBoolean();

        String result = String.valueOf(input);

        System.out.println("String representation: " + result);

        scanner.close();
    }
}
