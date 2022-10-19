#ifndef MAIN_H
#define MAIN_H

int  _printf(const char *format, ...);
int _putchar(char c);

typedef struct Specifiers
{
	char symbol;
	int (*f)();
} Specifiers;

#endif /* MAIN_H */
