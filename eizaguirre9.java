import java.util.Scanner;
import java.util.Random;

public class eizaguirre9
{
	public static void main(String[]args)
	{
		Random rand = new Random();
		Scanner keyboard = new Scanner(System.in);

		int x = rand.nextInt(19) + 1;
		int y;//guess
	while(true)
	{
		do
		{
			System.out.println("Enter a number in between 1 and 19:");
			y = keyboard.nextInt();
			
			if(y < 1 || y > 19)
			{
				 System.out.println("Wrong number, try again. ");
			}
		}
		while (y <1 || y > 19);
		
		if(y == x)
		{
			for(int i = 0; i< y; i++)
			{
				 System.out.println("WINNER WINNER CHICKEN Dinner");
			}
			break;
		}
		else
		{ 
			System.out.println("you lost");

			if (y > x)
			{ 
				System.out.println("Your number is higher by" + (y-x));
			}
			else
			{
				 System.out.println("Your number is lower by" + (x-y));
			}
		}
	}
    }
}
