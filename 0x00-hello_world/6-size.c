#include <stdio.h>

/**
 * Main - The main entry point
 *
 * Description - C program that prints the size of various types on the computer it is compiled and run on.
 *
 * return (0) as success
 */
int main(void)
{
  int sizeChar = sizeof(char);
  int sizeInt = sizeof(int);
  int sizeLong = sizeof(long int);
  int sizeLongLong = sizeof(long long int);
  int sizeFloat = sizeof(float);

  printf("Size of a char: %d byte(s)\n", sizeChar);
  printf("Size of an int: %d byte(s)\n", sizeInt);
  printf("Size of a long int: %d byte(s)\n", sizeLong);
  printf("Size of a long long int: %d byte(s)\n", sizeLongLong);
  printf("Size of a float: %d byte(s)\n", sizeFloat);
  return (0);
}
