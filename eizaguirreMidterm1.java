/*Name: Esthepanie Izaguirre
 *Class: CSC321
 *Midterm #1
 */

import java.util.Scanner;

public class eizaguirreMidterm1
{
	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);

		int y = 11; 	//number for user to gues
		int z = 4 ; 	//number of tries
				//
	for(int i =1; i <= z; i++)
	{

        System.out.println("Guess my number: ");
        int x = keyboard.nextInt();

		if( x < y)
		{
			System.out.println("Your Number is too low. ");
		}
		else if (x > y)
		{
			System.out.println("Your number is too high.");
		}
		else
		{
			System.out.println("Winner, Winner Chicken Dinner!!!");
		}

	}

	}
}

