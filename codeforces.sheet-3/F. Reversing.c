#include <stdio.h>
int main()
{
   int n, arr[1000], pos;
   scanf("%d",&n);
   for(int i=1; i<=n; i++)
    scanf("%d",&arr[i]);
   for(int i=n; i>=1; i--){
    printf("%d ",arr[i]);
   }
}
