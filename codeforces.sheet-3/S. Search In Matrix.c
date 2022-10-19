#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0; i<r; i++){
      for(int j=0; j<c; j++){
      scanf("%d",&arr[i][j]);
    }
     }
    int x;
    scanf("%d",&x);
    for(int i=0; i<r; i++){
      for(int j=0; j<c; j++){
      if(arr[i][j]==x){
         printf("will not take number");
        return 0;
      }
    }
     }
    printf("will take number");
    return 0;
}
