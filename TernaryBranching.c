// If statement Branching with ternary
// (condition) ? true: false

#include <stdio.h>
// for include toupper() function
#include <ctype.h>

int main(){
   char word = 'F';

   printf("F for respect: ");
   scanf("%c", &word);

   printf("Now you %s to me\n", (toupper(word) == 'F') ? "respect": "not repsect");
   return 0;
}
