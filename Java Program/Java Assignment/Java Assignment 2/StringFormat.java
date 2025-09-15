import java.util.Scanner;

public class StringFormat 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = scanner.nextLine();

        System.out.print("Enter your age: ");
        int age = scanner.nextInt();

        System.out.print("Enter your salary: ");
        double salary = scanner.nextDouble();

        String result = String.format("Name: %s, Age: %d, Salary: $%.2f", name, age, salary);

        System.out.println(result);

        scanner.close();
    }
}
