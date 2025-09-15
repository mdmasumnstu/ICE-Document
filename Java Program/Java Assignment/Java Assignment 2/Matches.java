import java.util.Scanner;

public class Matches 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first string: ");
        String str1 = scanner.nextLine();

        System.out.print("Enter the second string: ");
        String str2 = scanner.nextLine();

        boolean result = str1.matches(str2);
        System.out.println("Value returned = " + result);

        System.out.print("Enter a regex to match with the second string: ");
        String regex1 = scanner.nextLine();
        result = str2.matches(regex1);
        System.out.println("Value returned = " + result);

        System.out.print("Enter a regex to match with the first string: ");
        String regex2 = scanner.nextLine();
        result = str1.matches(regex2);
        System.out.println("Value returned = " + result);

        scanner.close();
    }
}

