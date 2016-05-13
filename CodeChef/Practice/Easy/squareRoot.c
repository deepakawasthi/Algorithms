#include<stdio.h>

int main(){
int t;
scanf("%d",&t);
while(t--){
    int num,temp,i;
    scanf("%d",&num);
    temp = num/2;
    while(temp*temp > num){
        temp = temp/2;
    }
    i=temp;
    if(temp*temp < num){
        for(;temp*temp<=num;i++){temp++;}
        temp--;
    }
    printf("%d\n",temp);
}
return 0;
}
