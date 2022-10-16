#include <stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
int    arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
     int mini=arr[0];
     int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==mini)
           count++;
    }
     if(count%2==0)
        printf("Unlucky");
    else
        printf("Lucky");
}
