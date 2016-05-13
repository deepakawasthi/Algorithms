#include <stdio.h>

int main(){
int t,temp,i;
scanf("%d",&t);
while(t--){
    long int num;
    scanf("%ld",&num);
    if(num > 1){
        temp = num;
        i=temp-1;
        for(;i>1;i--){
            num = num*(i);
        }
    }
    else
        num = 1;
    printf("\n%ld\n",num);
}
return 0;
}
