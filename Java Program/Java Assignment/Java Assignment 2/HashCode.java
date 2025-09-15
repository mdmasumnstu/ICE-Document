import java.util.Scanner;

public class HashCode 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter string: ");
        String input = scanner.nextLine();

        int hash = input.hashCode();
        System.out.println("Hash code of \"" + input + "\" is: " + hash);

        scanner.close();
    }
}
