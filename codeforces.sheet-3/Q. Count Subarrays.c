#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
 int n, count=0;
 scanf("%d",&n);
 int arr[n];
 for(int i=0; i<n; i++)
    scanf("%d",&arr[i]);
 for(int i=0; i<n; i++){
        count++;
    for(int j=i+1; j<n; j++){
          if(arr[j]>=arr[j-1])
            count++;
          else
            break;
        }
    }
     printf("%d\n",count);
    }
 }
 
