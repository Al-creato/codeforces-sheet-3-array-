#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n], count=0;
    for(int i=0; i<n; i++)
     scanf("%d",&arr[i]);
   int min=arr[0];
   for(int i=1; i<n; i++){
      if(min>arr[i])
         min=arr[i];
        }
  for(int i=0; i<n; i++){
      if(arr[i]==min)
        count++;
        }
      if(count%2==0)
   printf("Unlucky");
else
 printf("Lucky");
    return 0;
}
