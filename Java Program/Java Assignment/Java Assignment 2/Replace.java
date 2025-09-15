import java.util.Scanner;

public class Replace 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        System.out.print("Enter the character to replace: ");
        char oldChar = scanner.next().charAt(0);

        System.out.print("Enter the new character: ");
        char newChar = scanner.next().charAt(0);

        String result = input.replace(oldChar, newChar);

        System.out.println("The string after replacement: " + result);

        scanner.close();
    }
}
