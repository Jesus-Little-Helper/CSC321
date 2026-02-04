/*Name: Esthepanie Izaguirre
 * CSC 321
 * Lab 04
 */
import java.util.Scanner;

public class eizaguirre4
{

	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.println("--------");
		System.out.println("| Menu |");
		System.out.println("--------");
		System.out.println("1. Pizza");
	        System.out.println("2. Hamburger");
	        System.out.println("3. Tacos");
	        System.out.println("4. BBQ");
	        System.out.println("Enter your choice (1-4): ");

		int menu = keyboard.nextInt();

		//display of menu 
		switch (menu)
		{
			case 1:
				System.out.println("Pizza");
				break;
			case 2:
				System.out.println("Hamburger");
				break;
			case 3:
			       	System.out.println("Tacos");
				break;

			case 4: System.out.println("BBQ");
				break;

			default:
				System.out.println("You have input an INVALID  choice! /nPlease enter a value 0 - 4 ");
		}
	}
}
