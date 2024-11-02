#include <stdio.h>
  int main(){
      long long int a=1/(10^18);
      long long int b=1/(10^18);
      for(a<10^18; b<a^18;){
    printf("Please enter the cost of going left:");
    scanf("&d", &a);
     printf("Please enter the cost of going right:");
    scanf("&d", &b);
      if (a<=b)
    printf("Go left.\n");
      if (a>b)
    printf("Go right.\n");
   }
 return 0;
}
      
