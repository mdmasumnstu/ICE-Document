import java.util.Scanner;

public class Substring 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        System.out.print("Enter the starting index: ");
        int beginIndex = scanner.nextInt();

        String result = input.substring(beginIndex);

        System.out.println("The substring starting from index " + beginIndex + " is: " + result);

        scanner.close();
    }
}
