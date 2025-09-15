/*
 Write a Java program to create a class called Account with instance variables 
 accountNumber and balance. Implement a parameterized constructor that 
 initializes these variables with validation:

  accountNumber should be non-null and non-empty.
  balance should be non-negative.
  Print an error message if the validation fails.
*/
package java_assignment;

public class Account 
{
 private String accountNumber;
 private double balance;

 public Account(String accountNumber, double balance) 
 {
     if (accountNumber == null || accountNumber.isEmpty()) 
     {
         System.err.println("Error: Account number cannot be null or empty.");
         return;
     }
     if (balance < 0) 
     {
         System.err.println("Error: Balance cannot be negative.");
         return;
     }
     this.accountNumber = accountNumber;
     this.balance = balance;
 }

 public static void main(String[] args) 
 {

     Account account1 = new Account("12344326", 64320.00);
     System.out.println("Account 1 Number: " + account1.accountNumber);
     System.out.println("Account 1 Balance: " + account1.balance);
     Account account2 = new Account("", 400.00);
     Account account3 = new Account("1230000873", -200.00);
 }
}

