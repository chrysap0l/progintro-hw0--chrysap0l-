#include <stdio.h>
  int main(){
      long long int a=-1e18;
      long long int b=-1e18;

     do  {
      printf("Please enter the cost of going left:");   
           char c = scanf("%lld", &a);
      
      if (c == EOF ) {
          printf("<Found EOF>\n");
          return 0;
      }
      
     if  (( a < -1e18 ) || (a > 1e18 ))
          return 1;

     printf("Please enter the cost of going right:");
         char d = scanf("%lld", &b);

         if ( d == EOF) {
               printf("No right cost provided\n");
               return 1;
         }

      if  (( b < -1e18 ) || (b > 1e18 ))
          return 1;

      if(a<=b)
          printf("Go left.\n");
      if(a>b)
         printf("Go right.\n");
   }  while (1);
 
  return 0;
}
      
