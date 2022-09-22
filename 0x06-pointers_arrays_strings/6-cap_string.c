#include "main.h"
#include <string.h>
#include <stdbool.h>

/**
 * is_uppercase - checks for uppercase alphabet characters
 * @x: character to be examined
 *
 * Return: 'true' if @x is uppercase
 * 'false', otherwise
 */
bool is_uppercase(char x)
{
	if (x > 64 && x < 91)
		return (true);
	else
		return (false);

}

/**
 * is_lowercase - checks for lowercase alphabet characters
 * @x: character to be examined
 *
 * Return: true, if @x is lowercase
 * false, otherwise
 */
bool is_lowercase(char x)
{
	if (x > 96 && x < 123)
		return (true);
	else
		return (false);

}

/**
 * is_alphabet - checks if character is an alphabet
 * @c: character to be examined
 *
 * Return: true, if @c is an alphabet
 * false, otherwise
 */
bool is_alphabet(char c)
{
	if (is_lowercase(c) || is_uppercase(c))
		return (true);
	else
		return (false);
}

/**
 * is_word_separator - checks if character is a word separator
 * @c: character to be examined
 *
 * Return: true, if it is a word separator
 * false, otherwise
 */
bool is_word_separator(char c)
{
	char word_separators[] = {' ', '	', '\n', ',', ';', '.', '!'};
	char word_separators2[] = {'?', '"', '(', ')', '{', '}'};
	int len = strlen(word_separators);
	int i;
	bool result = false;

	for (i = 0; i < len; i++)
	{
		if (c == word_separators[i])
			result = true;
		if (c == word_separators2[i])
			result = true;
	}

	return (result);
}

/**
 * cap_string- capitalizes all words of a string
 * @str: pointer to the string
 *
 * Return: pointer to the string 'str'
 */
char *cap_string(char *str)
{
	int i = 0;
	bool is_new_word = false;

	while (str[i] != '\0')
	{
		if (is_word_separator(str[i - 1]) && is_alphabet(str[i]))
			is_new_word = true;
		else
			is_new_word = false;

		/* lowercase at start of sentence */
		if (i == 0 && is_lowercase(str[i]))
		{
			str[i] -= 32;
		}

		if (is_new_word && is_lowercase(str[i]))
			str[i] -= 32;

		i++;
	}

	return (str);
}
