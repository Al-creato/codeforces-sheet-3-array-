#include <stdio.h>
int main()
{
   int n, arr[1000], pos;
   scanf("%d",&n);
   for(int i=0; i<n; i++)
    scanf("%d",&arr[i]);
   int mini=arr[0];
       if(mini==arr[0])
          pos=0+1;
   for(int i=1; i<n; i++){
    if(mini>arr[i]){
        mini=arr[i];
        pos=i+1;
    }
   }
    printf("%d %d",mini,pos);
}
