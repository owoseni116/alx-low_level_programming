#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function
 *
 * Documentation: count number of commas and full stops
 * Return: Always 0 (Success)
 */
int main()
{
      int this_char, comma_count, stop_count;

      comma_count = stop_count = 0;
      this_char = getchar();
      while(this_char != EOF){
              if(this_char == '.')
                      stop_count = stop_count+1;
              if(this_char == ',')
                      comma_count = comma_count+1;
              this_char = getchar();
	      printf("character {%d} was entered", this_char);
      }
      printf("%d commas, %d stops\n", comma_count,
                      stop_count);
      exit(EXIT_SUCCESS);
}
