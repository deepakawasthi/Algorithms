#include <stdio.h>

int main(){
int t;
scanf("%d",&t);
while(t--){
	long num,temp,x;
	int sum = 0;
	scanf("%ld",&num);
	temp = num;

	if(temp >= 100){
	x = temp/100;
	sum += x;
	temp = temp - (x*100);
	}

	if(temp >= 50){
	x = temp/50;
	sum += x;
	temp = temp - (x*50);
	}

	if(temp >= 10){
	x = temp/10;
	sum += x;
	temp = temp - (x*10);
	}

	if(temp >= 5){
	x = temp/5;
	sum += x;
	temp = temp - (x*5);
	}

	if(temp >= 2){
	x = temp/2;
	sum += x;
	temp = temp - (x*2);
	}
	if(temp>=1){
	x = temp/1;
	sum += x;
	temp = temp - (x*1);
	}

	printf("%d\n",sum);
}
return 0;
}
