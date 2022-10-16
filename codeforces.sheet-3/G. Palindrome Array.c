#include <stdio.h>
int main()
{
   int n, arr[100001],flag=0;
   scanf("%d",&n);
   for(int i=0; i<n; i++)
    scanf("%d", &arr[i]);
    int i=0;
   while(i<n/2){
      if(arr[i]!=arr[n-1-i]){
       flag=1;
       break;
      }i++;
         }
       if(flag==1)
            printf("NO");
       else
        printf("YES");


}
 
