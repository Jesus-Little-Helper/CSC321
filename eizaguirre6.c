/*Name: Esthepanie Izaguirre
* CSC 321
* Lab 06*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int x  = 40;
	int y  = 6;

	double w = 40;
	double z = 6;

	int  total_1 =  0;
	int  total_2 =  0;
	int  total_3 =  0;
	int  total_4 =  0;
<<<<<<< HEAD

=======
>>>>>>> 04c26eebdc80f4c363c887321847103ecbd9ee91

	double vtotal_1 = 0;
	double vtotal_2 = 0;
	double vtotal_3 = 0;
	double vtotal_4 = 0;
<<<<<<< HEAD

=======
>>>>>>> 04c26eebdc80f4c363c887321847103ecbd9ee91
	
	//total One
	 total_1 = x + y * x / y - x;
	vtotal_1 = w + z * w / z - w;

	//total Two
	total_2 = - x - y / x * y + x;
	vtotal_2 = - w - z / w * z + w;

	//total Three
	total_3 = x + y - x / y;
	vtotal_3 = w + z - w / z;

	//Extra Credit 
<<<<<<< HEAD
    	 total_4 = x / y * y;
   	 vtotal_4 = w / z * z;
=======
     total_4 = x / y * y;
    vtotal_4 = w / z * z;
>>>>>>> 04c26eebdc80f4c363c887321847103ecbd9ee91

	//expression display
	 printf("\n ******* First Expression ******* \n ");
	printf("int total = %d \n", total_1);
	printf("double total = %lf \n", vtotal_1);

	printf("\n *******  Second Expression ******* \n ");
	printf("int total = %d \n", total_2);
        printf("double total = %lf \n", vtotal_2);


	printf("\n ******* Third Expression *******  \n ");
	printf("int total = %d \n", total_3);
        printf("double total = %lf \n", vtotal_3);

	 printf("\n ******* Extra Credit  *******  \n ");
        printf("int total = %d \n", total_4);
        printf("double total = %lf \n", vtotal_4);


	printf("\n ******* Extra Credit  *******  \n ");
        printf("int total = %d \n", total_4);
        printf("double total = %lf \n", vtotal_4);


	return EXIT_SUCCESS;
}
