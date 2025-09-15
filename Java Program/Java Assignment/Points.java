/*
 Overloading Constructors with Different Data Types
 Write a Java program to create a class called Point with instance variables x and y. 
 Implement overloaded constructors:

 *One constructor takes int parameters.
 *Another constructor takes double parameters.
 *Print the values of the variables for each constructor.
*/

package java_assignment;
public class Point 
{
 private int x;
 private int y;

 public Point(int x, int y) 
 {
     this.x = x;
     this.y = y;
 }

 public Point(double x, double y) 
 {
     this.x = (int) x;
     this.y = (int) y;
 }

 public void printPoint() {
     System.out.println("Point (x, y): (" + x + ", " + y + ")");
 }

 public static void main(String[] args) 
 {
     Point point1 = new Point(6, 1);
     point1.printPoint();

     Point point2 = new Point(4.5, 5.5);
     point2.printPoint();
 }
}
