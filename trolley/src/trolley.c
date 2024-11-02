#include <stdio.h>
  int main(){
      long long int a=1/(1e18);
      long long int b=1/(1e18);
      for(a<1e18; b<1e18;){
    printf("Please enter the cost of going left:");
    scanf("%d", &a);
     printf("Please enter the cost of going right:");
    scanf("%d", &b);
      if (a<=b)
    printf("Go left.\n");
      if (a>b)
    printf("Go right.\n");
   }
 return 0;
}
      
