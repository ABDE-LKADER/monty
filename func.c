#include "monty.h"

/**
 * is_num -> Checks if a string is a number
 * @str: String
 * Return: Depend Condition
*/

int is_num(char *str)
{
	int i = 0;

	str = strtok(str, " \n");
	if (str[0] == '-')
		i++;
	for (; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
	} return (0);
}

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
