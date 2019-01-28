import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    int Number1, Number2, Number3, Product;
    Scanner sc = new Scanner(System.in);
    System.out.print("To multiply three numbers, Enter the first number:");
    Number1 = sc.nextInt();
    System.out.print("Enter the second number: ");
    Number2 = sc.nextInt();
    System.out.print("Enter the third number: ");
    Number3 = sc.nextInt();
    sc.close();
    Product = (Number1 * Number2 * Number3);
    System.out.print("The Product of " + Number1 + " and " + Number2 + " is " + Product + ".");
  }
}