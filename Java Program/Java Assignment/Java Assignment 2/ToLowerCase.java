import java.util.Scanner;

public class ToLowerCase 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine();


        String result = input.toLowerCase();

        System.out.println("The string in lowercase is: " + result);

        scanner.close();
    }
}
