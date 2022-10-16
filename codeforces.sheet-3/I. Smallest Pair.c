#include <stdio.h>
#include <limits.h>
int main()
{
 int t;
 scanf("%d",&t);
 while(t--){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=1; i<=n; i++)
        scanf("%d",&arr[i]);
   int mini=INT_MAX;
for(int i=1; i<=n; i++){
    for(int j=i+1; j<=n; j++){
        if(mini>(arr[i]+arr[j]+j-i))
            mini=arr[i]+arr[j]+j-i;
    }
}
  printf("%d\n",mini);
 }
}
