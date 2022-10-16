#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    char s[100];
    scanf("%c",s);
    int l=a+b+1;
    int k=a+1;
    for(int i=1; i<=l; i++){
        scanf("%c",&s[i]);
        if(s[i]=='-'){
            if(i>k)
                c=0;
            else if(i==k)
                c=1;
        }
    }
     if(c==1)
     printf("Yes");
     else
        printf("No");

}

 
