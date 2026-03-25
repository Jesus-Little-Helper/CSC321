/*Name: Esthepanie Izaguirre
* CSC 321
* Lab 09 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
        int y, z; //random and guess number
        srand(time (0));
        y = rand() % 19 + 1;
while(1)
{
do
{
 printf("Guess a number between 1  and 19: \n");
  scanf("%d", & z);
  if(z < 1 || z > 19)
  {
         printf("Wrong number");
  }
}
  while (z < 1 || z >19 );

  if(z == y)
  {
          for(int i = 0; i < z; i++)
          {
                  printf("WINNER WINNER Chicken Dinner\n");
          }
         break;
  }
  else
  {
        printf("You Lost!\n");
       if(z > y)
       {
       printf("Your estimate was lowe by %d\n",z - y );
       } else {
         printf("Your estimate was lowe by %d\n",y - z );
        }
    }
}
return 0;
}
