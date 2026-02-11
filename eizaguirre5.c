/*Name: Esthepanie Izaguirre
* CSC 321
* Lab 05 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
        char w = 'E';
        int x = 11;
        double y = 8.5;
        float z = 1.0f;
        
        printf("w = %c,   address = %p\n", w, (void*)&w);
        printf("x = %d,   address = %p\n", x, (void*)&x);
        printf("y = %.3f, address = %p\n", y, (void*)&y);
        printf("z = %.2f, address = %p\n", z, (void*)&z);
        int ifInt = 0;

        if(x == 89)
      
        ifInt = 211; 
        { 
       printf("ifInt = %d, address = %p\n", ifInt, (void*)&ifInt);
        }
        printf("%d\n", ifInt);

        int arr[10] = {2,4,6,8,10,12,14,16,18,20};

        printf("\nValues of array and address:\n ");
        for(int i = 0; i < 10; i++)
        {
                printf("arr[%2d] = %2d at address %p\n", i, arr[i], (void*)&arr[i]);
        }

	return EXIT_SUCCESS;
 }
