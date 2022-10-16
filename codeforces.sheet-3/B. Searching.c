#include <stdio.h>
#define lld long long int
int main()
{
  int n;
  lld arr[100001];
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  lld value, pos=-1;
  scanf("%d", &value);
  for(int i=0; i<n; i++){
    if(value==arr[i]){
      pos=i;
      break;
    }
  }
   if(pos==-1)
   printf("-1");
   else
   printf("%d",pos);
   }
