import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.Scanner;

public class getBytes { // Class name is getBytes (as per your request)
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String str = scanner.nextLine();

        byte[] byteArray = str.getBytes(StandardCharsets.UTF_8);

        for (byte b : byteArray) {
            System.out.print(b + " ");
        }

        scanner.close();
    }
}
