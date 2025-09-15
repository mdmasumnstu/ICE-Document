/*
 Write a Java program to create a class called Rectangle with instance 
 variables length and width. Implement a parameterized constructor and 
 a copy constructor that initializes a new object using the values of an existing object. 
 Print the values of the variables.
*/
package java_assignment;

public class Rectangle 
{
 private double length;
 private double width;

 public Rectangle(double length, double width) 
 {
     this.length = length;
     this.width = width;
 }

 public Rectangle(Rectangle rectangle) 
 {
     this.length = rectangle.length;
     this.width = rectangle.width;
 }

 public static void main(String[] args) 
 {
     Rectangle rect1 = new Rectangle(10.5, 6.5);
     System.out.println("Rectangle 1 Length: " + rect1.length);
     System.out.println("Rectangle 1 Width: " + rect1.width);

     Rectangle rect2 = new Rectangle(rect1);
     System.out.println("Rectangle 2 Length: " + rect2.length);
     System.out.println("Rectangle 2 Width: " + rect2.width);
 }
}

