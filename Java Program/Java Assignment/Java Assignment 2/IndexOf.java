import java.util.Scanner;

public class IndexOf 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        System.out.print("Enter a character to find: ");
        char ch = scanner.next().charAt(0);

        int index = input.indexOf(ch);

        if (index != -1) {
            System.out.println("First occurrence of '" + ch + "' is at index: " + index);
        } else {
            System.out.println("Character '" + ch + "' not found in the string.");
        }

        scanner.close();
    }
}
