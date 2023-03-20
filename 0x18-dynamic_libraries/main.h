#ifndef MAIN_H
#define MAIN_H

int _putchar(char);
int _islower(int);
int _isalpha(int);
int _abs(int);
int _isupper(int);
int _isdigit(int);
int _strlen(char *);
void _puts(char *);
char *_strcpy(char *, char *);
int _atoi(char *);
char *_strcat(char *, char *);
char *_strncat(char *, char *, int);
char *_strncpy(char *, char *, int);
int _strcmp(char *, char *);
char *_memset(char *, char, unsigned int);
char *_memcpy(char *, char *, unsigned int);
char *_strchr(char *, char);
unsigned int _strspn(char *, char *);
char *_strpbrk(char *, char *);
char *_strstr(char *, char *);


/* c_imported_in_py.c */
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
/* int div(int a, int b); */
int mod(int a, int b);

#endif /* MAIN_H */
