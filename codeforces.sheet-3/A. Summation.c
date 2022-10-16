#include <stdio.h>
#include <stdlib.h>
#define lld long long int
int main()
{
  int n;
  scanf("%d",&n);
  lld arr[n], sum=0;
  for(int i=0; i<n; i++){
    scanf("%lld",&arr[i]);
     sum+=arr[i];
   }
    printf("%lld",abs(sum));
}






 
