#include<stdio.h>
#include<limits.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
   int n;
scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
      scanf("%d",&arr[i]);
    for(int i=0; i<n; i++){
     int max=INT_MIN;
     for(int j=i;j<n; j++){
      for(int k=i; k<=j; k++){
       if(max<arr[k])
        max=arr[k];
    }
     printf("%d ",max);
    }
    }
      printf("\n");
    }
}
