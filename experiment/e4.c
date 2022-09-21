#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function; entry point
 *
 * Documentation: Essence of unsigned ints
 * Return: Don't know yet, but certain the code 'exits'
 ** code won't run because there is an unterminating
 * while loop
 */
int main(void){
      unsigned int x;
      x = 0;
      while(x >= 0){
              printf("%u\n", x);
              x = x+1;
      }

      exit(EXIT_SUCCESS);
}
