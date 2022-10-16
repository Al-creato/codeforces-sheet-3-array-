#include<stdio.h>

int main()
{
    int n, arr[10000], p,p1;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
     scanf("%d", &arr[i]);
    int mini = arr[0];
    int max = arr[0];
    for(int i=1; i<n; i++){
     if(mini>arr[i]){
       mini=arr[i];
     p=i;
    }
    }
    for(int i=1; i<n; i++){
     if(max<arr[i]){
       max=arr[i];
     p1=i;
    }
    }
    arr[p]=arr[p]+arr[p1];
     arr[p1]=arr[p]-arr[p1];
     arr[p]=arr[p]-arr[p1];
    for(int i=0; i<n; i++)
    printf("%d ",arr[i]);
    return 0;
}
