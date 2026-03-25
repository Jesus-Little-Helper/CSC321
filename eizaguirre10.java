/*Name: Esthepanie Izaguirre
 * CSC 321
 * Lab 10
 */
import java.util.Scanner;

public class eizaguirre10
{
	public static double volume(double radius, double height)
	{
		return Math.PI*radius*radius*height;
	}

	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.println("Enter the RADIUS of Cylinder: ");
		double radius = keyboard.nextDouble();

		System.out.println("Enter the HEIGHT of Cylinder: ");
                double height = keyboard.nextDouble();

		double vol = volume(radius,height);

		System.out.printf("The volume of a cylinder is:%.2f%n", vol);
	}
}
