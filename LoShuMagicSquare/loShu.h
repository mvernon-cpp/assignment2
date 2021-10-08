#ifndef LOSHU_H
#define LOSHU_H

#include <stdbool.h>

typedef struct {
   int a[3][3];
} arr2d;

int magic(arr2d printSquare);  //check sums (0 is false, 1 is true)
void printSquare(arr2d square); //print out formatted square
arr2d fill();  //return array with values 1-9 that appear once
bool unique(int value, arr2d square, int currentRow, int currentCol); //check for duplicates (0 is unique value, 1 is there are dup)

#endif