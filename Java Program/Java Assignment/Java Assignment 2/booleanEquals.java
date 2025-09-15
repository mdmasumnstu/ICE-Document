import java.util.Scanner;

public class booleanEquals 
{
    String name;
    int age;


    public booleanEquals(String name, int age) 
    {
        this.name = name;
        this.age = age;
    }

    public boolean equals(Object obj) 
    {
        if (this == obj) 
        {
            return true; 
        }

        if (obj == null || getClass() != obj.getClass()) 
        {
            return false; 
        }

        booleanEquals person = (booleanEquals) obj;
        return this.name.equals(person.name) && this.age == person.age;
    }

    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter name for person 1: ");
        String name1 = scanner.nextLine();
        System.out.print("Enter age for person 1: ");
        int age1 = scanner.nextInt();
        scanner.nextLine();

        System.out.print("Enter name for person 2: ");
        String name2 = scanner.nextLine();
        System.out.print("Enter age for person 2: ");
        int age2 = scanner.nextInt();

        booleanEquals person1 = new booleanEquals(name1, age1);
        booleanEquals person2 = new booleanEquals(name2, age2);

        if (person1.equals(person2)) 
        {
            System.out.println("The two persons are equal.");
        } 
        else 
        {
            System.out.println("The two persons are not equal.");
        }

        scanner.close();
    }
}
