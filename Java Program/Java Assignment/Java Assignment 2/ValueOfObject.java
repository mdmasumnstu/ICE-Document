import java.util.Scanner;

public class ValueOfObject 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        String result = String.valueOf(input);

        System.out.println("String representation: " + result);

        Object obj = null;
        System.out.println("String representation of null: " + String.valueOf(obj));

        scanner.close();
    }
}
