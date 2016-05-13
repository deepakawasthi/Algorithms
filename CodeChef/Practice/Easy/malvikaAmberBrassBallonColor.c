#include<stdio.h>

int main(){
int t;
scanf("%d",&t);
while(t--){
    char str[100];
    scanf("%s",str);
    int a_count = 0,b_count = 0,i=0;
    while(str[i] != '\0'){
        if(str[i] == 'a')
            a_count++;
        else
            b_count++;
            //if(str[i] == 'b')
        i++;
    }
    if(a_count>=b_count)
        printf("%d\n",b_count);
    else
        printf("%d\n",a_count);
}
return 0;
}
