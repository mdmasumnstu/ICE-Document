import java.util.Scanner;

public class copyValueOf 
{ 
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the size: ");
        int n = scanner.nextInt();
        char[] userChars = new char[n];

        System.out.println("Enter the characters one by one:");
        for (int i = 0; i < n; i++) {
            userChars[i] = scanner.next().charAt(0); 
        }

        String result = String.copyValueOf(userChars);

        System.out.println("Converted String: " + result);
        
        scanner.close();
    }
}
