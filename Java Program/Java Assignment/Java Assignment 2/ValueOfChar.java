import java.util.Scanner;

public class ValueOfChar {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a character: ");
        char input = scanner.next().charAt(0); 

        String result = String.valueOf(input);

        System.out.println("String representation: " + result);

        scanner.close();
    }
}
