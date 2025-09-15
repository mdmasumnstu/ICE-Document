import java.util.Scanner;

public class RegionMatches 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first string: ");
        String input1 = scanner.nextLine();

        System.out.print("Enter the second string: ");
        String input2 = scanner.nextLine();

        System.out.print("Enter the starting index in the first string: ");
        int toffset = scanner.nextInt();

        System.out.print("Enter the starting index in the second string: ");
        int ooffset = scanner.nextInt();

        System.out.print("Enter the length of the region to compare: ");
        int len = scanner.nextInt();

        System.out.print("Should the comparison ignore case (true/false)? ");
        boolean ignoreCase = scanner.nextBoolean();

        boolean result = input1.regionMatches(ignoreCase, toffset, input2, ooffset, len);

        if (result) 
        {
            System.out.println("The specified regions match.");
        } 
        else 
        {
            System.out.println("The specified regions do not match.");
        }

        scanner.close();
    }
}
