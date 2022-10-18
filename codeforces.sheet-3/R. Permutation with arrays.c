#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int arr[n], ar[n];
    for(int i=0; i<n; i++)
     scanf("%d",&arr[i]);
    for(int i=0; i<n; i++)
     scanf("%d",&ar[i]);
    for(int i=0; i<n; i++){
     for(int j=i+1; j<n; j++){
       if(arr[i]>arr[j]){
      int  temp=arr[i];
         arr[i]=arr[j];
        arr[j]=temp;
    }
     }
      }
    for(int i=0; i<n; i++){
     for(int j=i+1; j<n; j++){
       if(ar[i]>ar[j]){
      int  temp=ar[i];
         ar[i]=ar[j];
        ar[j]=temp;
    }
     }
      }
   for(int i=0; i<n; i++){
      if(arr[i]!=ar[i]){
      c=1;
     break;
    }
   }
 if(c==1)
 printf("no");
else
printf("yes");
    return 0;
}
