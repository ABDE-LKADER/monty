#include "monty.h"

/**
 * int_to_str -> Converts an integer to a string
 * @num: Integer
 * Return: Depend Condition
*/

char *int_to_str(int num)
{
	char *string = malloc(sizeof(char) * 10);

	sprintf(string, "%d\n", num);
	return (string);
}
