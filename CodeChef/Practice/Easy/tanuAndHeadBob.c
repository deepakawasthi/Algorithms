#include<stdio.h>

int main()
{
int n,i,res,t;
char ch;
scanf("%d",&n);
while(n--){
   scanf("%d",&t);
   res =0;
   for(i=0;i<=t;i++){
    scanf("%c",&ch);
    if(ch == 'Y'){
        res = 1;
    }
    if(ch == 'I'){
        res = 2;
    }
   }
   if(res == 1)
        printf("NOT INDIAN\n");
   else if(res == 2)
        printf("INDIAN\n");
   else
        printf("NOT SURE\n");
}
return 0;
}
