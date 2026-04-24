/*Name: Esthepanie Izaguirre
* CSC 321
* Midterm 2 */


#include <stdio.h>
#include <stdlib.h>


void Names(int y)
{
        char name[] = "Esthepanie";

        for(int i; i < 10; i++)
        {
                printf("%s %d\n", name, y);
        }
}

int main(void)
{
	int x;


	printf("Enter a NUMBER: ");
	scanf("%d", &x);

	Names(x);

	return 0;
}
