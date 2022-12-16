/**
 * _isupper - returns 1 if input param is uppercase
 * else, return 0
 *
 * @c: input param; of char type.
 *
 * Documentation: _isupper("A") --> 1
 * _isupper("a") --> 0
 *
 * Return: Always 0
 */
int _isupper(char c)
{
  if (c > 64 && c < 91)
  {
    return 1;
  }
  return 0;
}
