/*
  Write a Java program to create a class called Classroom with instance 
  variables className and students (an array of strings). 
  Implement a parameterized constructor that initializes these variables. 
  Print the values of the variables
*/
package java_assignment;
public class Classroom 
{
 private String className;
 private String[] students;

 public Classroom(String className, String[] students) 
 {
     this.className = className;
     this.students = students;
 }

 public void printClassroom() {
     System.out.println("Class Name: " + className);
     System.out.print("Students: ");
     for (String student : students) {
         System.out.print(student + " ");
     }
     System.out.println();
 }

 public static void main(String[] args) 
 {
     String[] studentArray = {"Shen", "Jhon", "Wiliamson"};

     Classroom classroom = new Classroom("Engineering Faculty 218", studentArray);
     classroom.printClassroom();
 }
}

