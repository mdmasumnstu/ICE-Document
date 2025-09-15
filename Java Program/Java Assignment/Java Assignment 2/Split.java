import java.util.Scanner;

public class Split 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        System.out.print("Enter the regular expression to split the string by: ");
        String regex = scanner.nextLine();

        String[] result = input.split(regex);

        System.out.println("The string after splitting:");
        for (String part : result) {
            System.out.println(part);
        }

        scanner.close();
    }
}
