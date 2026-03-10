/*Name: Esthepanie Izaguirre
 * CSC 321
 * Lab 06 */


import java.util.Scanner;

public class eizaguirre6
{
	public static void main(String[] args)
	{
		int x = 40;
		int y = 6;

		double w = 40;
		double z = 6; 

		int total_1 = 0;
		int total_2 = 0;
		int total_3 = 0;

		double vtotal_1 = 0;
		double vtotal_2 = 0;
		double vtotal_3 = 0;

		total_1  =  x + y * x / y - x;
		vtotal_1  = w + z * w / z - w;

		 total_2  = - x - y / x * y + x;
                vtotal_2  = - w - z / w * z + w;

		 total_3  = x + y - x / y;
                vtotal_3  = w + z - w / z;
		total_4 = x / y * y;
                vtotal_4 = w / z * z;


		System.out.println("---- Expression 1 ----");
		System.out.println("int total = " + total_1);
		System.out.println("double total = " + vtotal_1);

		System.out.println("---- Expression 2 ----");
		 System.out.println("int total = " + total_2);
                System.out.println("double total = " + vtotal_2);

		System.out.println("---- Expression 3 ----");
		 System.out.println("int total = " + total_3);
                System.out.println("double total = " + vtotal_3);

		 System.out.println("---- Extra Credit ----");
                 System.out.println("int total = " + total_4);
                System.out.println("double total = " + vtotal_4);
		

	}
}
