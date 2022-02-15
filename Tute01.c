/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float mark, sum = 0, avg;
  int i;
  for(i=1; i<3; i++)
    {
      printf("Input mark%d - ", i);
      scanf("%f", &mark);
      sum = sum + mark;
    }
  avg = sum/2.0;

  printf("Average = %.2f", avg);
  return 0;
}

