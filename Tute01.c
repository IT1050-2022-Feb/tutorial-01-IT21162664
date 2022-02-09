/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {
  int sub1,sub2;
  float avg;

  printf("enter sub1 marks:");
  scanf("%d",&sub1);
  printf("enter sub2 marks:");
  scanf("%d",&sub2);

  avg=(sub1 + sub2)/2.0;
  printf("average= %.2f",avg);

  return 0;
}

