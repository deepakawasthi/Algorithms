#include<stdio.h>

int main(){
int t;
scanf("%d",&t);
while(t--){
    long num,rem,temp;
    int div=10,sum=0;
    scanf("%d",&num);
    temp = num;

    while(temp){
        rem = temp% div;
        temp= temp/ div;
        sum += rem;
    }
    printf("%d\n",sum);
}
return 0;
}
