import java.util.Scanner;

public class ValueOfLong 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a long value: ");
        long input = scanner.nextLong();

        String result = String.valueOf(input);

        System.out.println("String representation: " + result);

        scanner.close();
    }
}
