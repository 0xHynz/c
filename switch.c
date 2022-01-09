// switch example
#include <stdio.h>
// ctype.h library for include toupper()
#include <ctype.h>

int main(){
   char a;

   printf("A-C: ");
   scanf("%c", &a);

   // toupper function for capital similar like upper() in python.
   switch(toupper(a)){
       case 'A':
          printf("a for A\n");
          break;

       case 'B':
          printf("b for B\n");
          break;

       // if in case just blank without any code, it's automatic redirect to D result
       case 'C':
       case 'D':
          printf("d for D\n");
          break;

       default:
          printf("You not input a char, so i don't make a special result:(");

   }
   return 0;
}
