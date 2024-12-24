#include<stdio.h>
int main () {
	int a,i,ip;
	
	printf("Provide me a Number : ");
	scanf("%d",&a);
	
	if(a<=1){
		ip=0;
	}
	else{
		for(i=2; i*i<=a; ++i){
			if(a%i==0){
					ip=0;
					break;
				}	
			}
		}
	
	
	if (ip){
		printf("Yes It Is Prime Number.");
	}
	else{
		printf("No It Is Not Prime Number");
	}
	
}
