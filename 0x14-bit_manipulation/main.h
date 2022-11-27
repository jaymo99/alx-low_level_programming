#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

/* Main functions */
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* 5-flip_bits.c */
unsigned int count_active_bits(unsigned long int n);


#endif /* MAIN_H */
