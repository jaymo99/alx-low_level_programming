// C program to illustrate strspn() function
#include <stdio.h>
#include <string.h>
  
int main () {
   int len = strspn("hello","olleh");
   printf("Length of initial segment matching : %d\n", len );	 
   return(0);
}
