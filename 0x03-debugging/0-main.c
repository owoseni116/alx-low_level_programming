#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        char res = positive_or_negative(i);

        if (res < 0)
        {
          printf("%c is negative", res);
        } else if (res > 0)
        {
          printf("%c is positive", res);
        } else {
          printf("%c is zero", res);
        }
        return (0);
}
