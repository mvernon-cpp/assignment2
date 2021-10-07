#include "employee.h"
#include <string.h>
#include <stdlib.h>

Employee EmployeeTable[] =
    {
        {1001l, "Daphne Borromeo", "909-555-2134", 8.78},
        {1011l, "Tammy Franklin", "213-555-1212", 4.50},
        {1140l, "Dorris Pearl", "310-555-1215", 7.80},
        {4011l, "Tony Bobcat", "909-555-12350", 6.34},
        {5045l, "Brian Height", "714-555-2749", 8.32}};

const int EmployeeTableEntries = sizeof(EmployeeTable) / sizeof(EmployeeTable[0]); //why 160/32?

//Explain padding in gcc compiler. Each member in struct Employee = 8 bytes
//Depends on compiler used for Memory alignment. All members can be accessed by incrementing equal distance

/* 
void main()
{
   printf("%d\n", sizeof(EmployeeTable));
   printf("%d\n", sizeof(EmployeeTable[0]));
   printf("%d\n", sizeof(long));
   printf("%d\n", sizeof(char *));  //I have Intel 64 bit processor -> 8 bytes for address
   printf("%d\n", sizeof(char *));
   printf("%d\n", sizeof(double));
}
*/