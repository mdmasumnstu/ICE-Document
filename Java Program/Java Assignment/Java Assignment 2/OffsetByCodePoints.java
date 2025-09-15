import java.util.Scanner;

public class OffsetByCodePoints 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        System.out.print("Enter the starting index: ");
        int index = scanner.nextInt();

        System.out.print("Enter the code point offset: ");
        int codePointOffset = scanner.nextInt();

        int newIndex = input.offsetByCodePoints(index, codePointOffset);

        System.out.println("The new index after offset is: " + newIndex);

        scanner.close();
    }
}

    

