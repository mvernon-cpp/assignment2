//gcc employeeMain.c employeeTable.c employeeOne.c
//gcc employeeMain.c employeeTable.c employeeTwo.c
#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main(void)
{
   //defined in employeeOne.c or employeetwo.c
   PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
   PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char *nameToFind);

   //Task 1
   PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char *phoneToFind);
   PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);

   //defined in employeeTable.c
   extern Employee EmployeeTable[];
   extern const int EmployeeTableEntries;

   PtrToEmployee matchPtr; //Declaration

   //Task 1 Cont
   //Example: phone found
   matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "714-555-2749");
   if (matchPtr != NULL)
      printf("Employee phone number < 714-555-2749 > is in the record %d\n", matchPtr - EmployeeTable);
   else
      printf("Employee phone number < 714-555-2749 > is NOT found in the record\n");

   //Example: phone not found
   matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "123-456-7890");
   if (matchPtr != NULL)
      printf("Employee phone number < 123-456-7890 > is in the record %d\n ", matchPtr - EmployeeTable);
   else
      printf("Employee phone number < 123-456-7890 > is NOT found in the record\n");

   //Example: salary found
   matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 4.50);
   if (matchPtr != NULL)
      printf("Employee salary < $4.50 > is in record %d\n", matchPtr - EmployeeTable);
   else
      printf("Employee salary < $4.50 > is NOT found in the record\n");

   //Example: salary not found
   matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 1.23);
   if (matchPtr != NULL)
      printf("Employee salary < $1.23 > is in record %d\n", matchPtr - EmployeeTable);
   else
      printf("Employee salary < $1.23 > is NOT found in the record\n");

   //Lecture 12
   /*
   //Example not found
   matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);
   if (matchPtr != NULL)
      printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable);
   else
      printf("Employee ID is NOT found in the record\n");

   //Example found
   matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
   if (matchPtr != NULL)
      printf("Employee Tony Bobcat is in the record %d\n", matchPtr - EmployeeTable);
   else
      printf("Employee Tony Bobcat is NOT found in the record\n");
*/
   return EXIT_SUCCESS;
}