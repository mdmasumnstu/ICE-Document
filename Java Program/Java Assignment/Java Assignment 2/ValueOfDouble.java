import java.util.Scanner;

public class ValueOfDouble
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a double value: ");
        double input = scanner.nextDouble();

        String result = String.valueOf(input);

        System.out.println("String representation: " + result);

        scanner.close();
    }
}
