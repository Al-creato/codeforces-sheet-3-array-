#include <stdio.h>
int main()
{
    int n, arr[1000];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
    }
     for(int i=0; i<n; i++){
        if(arr[i]>0)
            arr[i]=1;
        else if(arr[i]<0)
            arr[i]=2;
     }
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
