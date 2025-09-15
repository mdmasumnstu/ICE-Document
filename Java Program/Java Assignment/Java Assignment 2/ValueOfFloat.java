import java.util.Scanner;

public class ValueOfFloat 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a float value: ");
        float input = scanner.nextFloat();

        String result = String.valueOf(input);

        System.out.println("String representation: " + result);

        scanner.close();
    }
}
