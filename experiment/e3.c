#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function
 *
 * Documentation: non-portable result
 * Return: Always 0 (Success)
 */
int main(){
      char c;

      c = 'a';
      while(c <= 'z'){
              printf("value %d char %c\n", c, c);
              c = c+1;
      }

      exit(EXIT_SUCCESS);
}
