
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
      int Counter;
    	int[] Number;
    	Number = new int[10];
    	Scanner input = new Scanner(System.in);
    	System.out.print("To read and print 10 numbers, Enter the first number:");
    	Number[0] = input.nextInt();
    	for(Counter = 1; Counter <= 9; Counter++)
    	{
      	System.out.print("Enter the next number:");
      	Number[Counter] = input.nextInt();
    	}
    	System.out.print("The 10 numbers are");
    	for(Counter = 0; Counter <= 9; Counter++)
    	{
    	  System.out.print(" " + Number[Counter]);
    	}
    	System.out.print(".");
  }
}

