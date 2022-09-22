/**
 * _isalpha - checks for alphabetic character
 *
 * @c: the character to be checked
 * Return: 1 if c is a letter, lowercase
 * or uppercase
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
