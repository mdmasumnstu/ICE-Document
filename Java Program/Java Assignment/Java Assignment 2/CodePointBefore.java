import java.util.Scanner;

public class CodePoin {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine(); // Taking input from the user

        System.out.print("Enter an index: ");
        int index = scanner.nextInt(); // Taking the index as input

        if (index > 0 && index <= input.length()) {
            int codePoint = input.codePointBefore(index);
            System.out.println("Code Point Before Index " + index + ": " + codePoint);
        } else {
            System.out.println("Invalid index! It must be greater than 0 and within the string length.");
        }

        scanner.close();
    }
}
