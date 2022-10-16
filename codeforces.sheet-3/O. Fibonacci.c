#include <stdio.h>
#define ll long long int
int main()
{
 int n;
 scanf("%d",&n);
 ll arr[51];
 arr[1]=0;
 arr[2]=1;
 for(int i=3; i<51; i++){
    arr[i]=arr[i-1]+arr[i-2];
 }
  printf("%lld\n",arr[n]);
}
