#ifndef MAIN_H
#define MAIN_H

/**
 * struct words_n - an array of words
 *
 * @array: array containing word tokens
 * @n_words: number of words/items in the array.
 */
typedef struct words_n {
	char **array;
	int num;
} words_n;

/* secondary functions */
words_n split_str(char *str);

#endif /* MAIN_H */

