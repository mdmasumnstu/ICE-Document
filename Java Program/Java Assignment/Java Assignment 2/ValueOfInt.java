import java.util.Scanner;

public class ValueOfInt 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter an integer value: ");
        int input = scanner.nextInt();

        String result = String.valueOf(input);

        System.out.println("String representation: " + result);

        scanner.close();
    }
}
