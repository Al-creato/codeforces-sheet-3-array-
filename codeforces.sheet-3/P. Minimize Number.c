#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
       scanf("%d",&arr[i]);
      if(arr[i]%2!=0){
       printf("0");
      return 0;
    }
    }
     int count=0, flag=0;
    while(flag==0){
     for(int i=0; i<n; i++){
       if(arr[i]%2==0)
         arr[i]=arr[i]/2;
        else{
         flag=1;
        break;
        }
       }
     count++;
     }
      printf("%d\n",count-1);
    return 0;
}
