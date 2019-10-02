/**
 * Author: Dante Lawrence
 * Date: October 1, 2019
 *
 * Thir program demonstrates pointers with functions.
 **/

#include <stdlib.h>
#include <stdio.h>

//pass by value
int changeVals(int a, int b);

//ignore the ugly function name
//pass by reference
int changeValsWithPointers(int *a, int *b);

int main(int argc, char const *argv[]) {
  /*
   * The biggest thing you need to know is that pointers, allow us to pass by
   * reference to a function. This allows us to change a variable's value
   * globally, whereas with regular variables, we could not do this. This
   * allows us to change multiple variables with one function!
   */

  int a = 5, b = 5;
  changeVals(a, b);
  printf("a = %d, b = %d. The values have not changed\n", a, b);

  changeValsWithPointers(&a, &b); //pass in the memory addresses of a and b
  printf("a = %d, b = %d. The values have changed!\n", a, b);

  return 0;
}

int changeVals(int a, int b) {
  a = 10;
  b = 10;
  return 0;
}

int changeValsWithPointers(int *a, int *b) {
  /* Dereference the pointers and place the value 10 into it.
   * Verbally, "Go to that spot in memory and place this value there."
   */
  *a = 10;
  *b = 10;
  return 0;
}
