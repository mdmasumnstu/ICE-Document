/*
 Write a Java program to create a class called "Cat" with instance variables name and age. 
 Implement a default constructor that initializes the name to "Unknown" and the age to 0. 
 Print the values of the variables.
*/
package java_assignment;

public class Cat 
{
   public String name;
    public int age;
    
    public Cat() 
    {
        
        this.name = "Unknown";
        
        this.age = 0;
    }
  
    public String getName() 
    {
        return name;
    }
    
    public int getAge() 
    {
        return age;
    }
    
    public static void main(String[] args) 
    {
        Cat myCat = new Cat();
        System.out.println("Cat's Name: " + myCat.getName());
        System.out.println("Cat's Age: " + myCat.getAge());
    }
}

