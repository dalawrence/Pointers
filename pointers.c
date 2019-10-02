/**
 * Author: Dante Lawrence
 * Date: October 1, 2019
 *
 * This program shows the basics of pointers.
 **/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x = 5;
  /* The ampersand gets the memory address. We are placing the memory address of x
   * inside the variable ptr. ptr is now a reference to the variable x.
   */
  int *ptr = &x;

  /* I want you to notice that pointers are variables and have their own
   * spot in memory. I want you to also notice that the value stored in
   * pointers is a memory address.
   */
  printf("The memory address of the variable ptr is %p\n", &ptr);
  printf("The value of the variable ptr is %p\n", ptr); //pointers hold memory addresses
  printf("The memory address of the variable x is %p\n", &x);
  printf("The value of x is %d\n", x);

  printf("\nHere is an easier perspective:\n");
  printf("Variable   Memory address   Value\n");
  printf("%-10s %-16p %p\n", "ptr", &ptr, ptr);
  printf("%-10c %-16p %d\n", 'x', &x, x);
  printf("As you can see in the table, the variable ptr's value is the memory address of x!\n");

  /* Finally, if we dereference the pointer ptr, we can get the value at the
   * memory address it is pointing at, and in this case that would be x.
   */
  printf("\nIndeed, %d = %d!\n", *ptr, x);
  return 0;
}
