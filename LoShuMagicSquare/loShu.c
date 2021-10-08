#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include "loShu.h"

int magic(arr2d square)
{
   int row1, row2, row3, col1, col2, col3, diag1, diag2, i, j;

   row1 = square.a[0][0] + square.a[0][1] + square.a[0][2];
   row2 = square.a[1][0] + square.a[1][1] + square.a[1][2];
   row3 = square.a[2][0] + square.a[2][1] + square.a[2][2];

   col1 = square.a[0][0] + square.a[1][0] + square.a[2][0];
   col2 = square.a[0][1] + square.a[1][1] + square.a[2][1];
   col3 = square.a[0][2] + square.a[1][2] + square.a[2][2];

   diag1 = square.a[0][0] + square.a[1][1] + square.a[2][2];
   diag2 = square.a[2][0] + square.a[1][1] + square.a[0][2];

   //test sum outputs
   //printf("%d  %d  %d  %d  %d  %d  %d  %d ", row1, row2, row3, col1, col2, col3, diag1, diag2);

   return row1 == 15 && row2 == 15 && row3 == 15 && col1 == 15 && col2 == 15 && col3 == 15 && diag1 == 15 && diag2 == 15;
}

void printSquare(arr2d square)
{
   for (int row = 0; row < 3; row++)
   {
      printf("[");
      for (int colm = 0; colm < 3; colm++)
      {
         printf(" %d ", square.a[row][colm]);
      }
      printf("]\n");
   }
   printf("\n");
}

arr2d fill()
{
   arr2d final = {0};
   time_t t;
   int random;

   //int isFull = 0;

   //generates random int
   srand(time(NULL)); //OR srand((unsigned)time(&t));

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         do
         {
            random = (rand() % 9) + 1;
            final.a[i][j] = random;
            //printSquare(final);   //test output for each run through, decoding

         } while (!unique(final.a[i][j], final, i, j));
      }
   }
   return final;
}

bool unique(int value, arr2d square, int currentRow, int currentCol)
{
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if (i == currentRow && j == currentCol)
            continue;
         if ((value == square.a[i][j]))
         {
            //printf("%d is not a unique value. Generating new value.\n", value);   //decoding
            return false;
         }
      }
   }
   return true;
}
