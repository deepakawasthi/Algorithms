#include <stdio.h>

int main(){
int t;
scanf("%d",&t);
while(t--){
long a,b,c;
scanf("%ld %ld %ld",&a,&b,&c);
int max = (a>=b?a:b);
max = (max>=c?max:c);

int min = (a<=b?a:b);
min = (min <=c?min:c);

if(a != max && a!= min)
    printf("%d\n",a);
else if(b != max && b!= min)
    printf("%d\n",b);
else
    printf("%d\n",c);
}
return 0;
}
