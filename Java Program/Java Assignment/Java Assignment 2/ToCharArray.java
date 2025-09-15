import java.util.Scanner;

public class ToCharArray {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        char[] charArray = input.toCharArray();

        System.out.println("The characters in the string are:");
        for (char c : charArray) 
        {
            System.out.println(c);
        }

        scanner.close();
    }
}
