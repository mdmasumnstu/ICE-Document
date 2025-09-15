import java.util.Scanner;

public class Trim 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string with extra spaces: ");
        String input = scanner.nextLine();

        String result = input.trim();

        System.out.println("String after trim: '" + result + "'");

        scanner.close();
    }
}
