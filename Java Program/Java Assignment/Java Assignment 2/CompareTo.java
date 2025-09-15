import java.util.Scanner;

public class CompareTo
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first string: ");
        String firstString = scanner.nextLine();

        System.out.print("Enter the second string: ");
        String secondString = scanner.nextLine();

        int result = firstString.compareTo(secondString);

        if (result < 0) 
        {
            System.out.println("\"" + firstString + "\" comes before \"" + secondString + "\" lexicographically.");
        } else if (result > 0) {
            System.out.println("\"" + firstString + "\" comes after \"" + secondString + "\" lexicographically.");
        } else {
            System.out.println("\"" + firstString + "\" is equal to \"" + secondString + "\".");
        }

        scanner.close();
    }
}
