//REMINDER: gcc magicSquare.c loShu.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "loShu.h"

int main()
{
   int isLoShu = 0;     //false
   int countSquare = 0; //counts when randArr is reset

   //Predefined valid lo shu square
   arr2d myArr1 = {4, 9, 2, 3, 5, 7, 8, 1, 6};

   //Predefined invalid lo shu square
   arr2d myArr2 = {7, 9, 3, 4, 5, 6, 1, 8, 2};

   //Test predefined squares
   (magic(myArr1) == 1) ? printf("myArr1 is a Magic Square!\n") : printf("myArr1 is not a Magic Square.\n");
   (magic(myArr2) == 1) ? printf("myArr2 is a Magic Square!\n") : printf("myArr2 is not a Magic Square.\n");

   //Declare 2d array
  
   arr2d randArr;

   while(isLoShu == 0)
   {
      //Assign randArr with fill, random unique values 1-9
      randArr = fill();

      //Test randArr square if it is Lo Shu
      (magic(randArr) == 1) ? isLoShu = 1 : countSquare++;
   }
 

   printSquare(randArr);
   printf("Total squares generated: %d", countSquare);
   

   return 1;
}