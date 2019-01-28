

import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    int Product = 1;
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter a number upto which you would like to print n^n series:");
    int Number = scanner.nextInt();
    System.out.print("The n power n series upto " + Number + " is");
    for (int Count = 1; Product <= Number; Count++) { 
      Product = 1;
      for(int Counter = 1; Counter <= Count; Counter++) {
        Product = Product * Count;
      }
      if (Product <= Number){
        System.out.print(" " + Product);
      }  
    }
    System.out.print (".");
    scanner.close();
  }
}