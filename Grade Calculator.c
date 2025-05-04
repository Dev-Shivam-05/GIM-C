#include<stdio.h>
int main() {
	int m1,m2,m3,total;
	float avg;
	
	printf("enter a number : ");
	scanf("%d",&m1);
	
	printf("enter a number : ");
	scanf("%d",&m2);
	
	printf("enter a number : ");
	scanf("%d",&m3);
	
	total = m1+m2+m3;
	
	avg=(float)total/3;
	
	if(avg>=90) {
		printf("your Grade is : A");
	}
	else if(avg>=70){
		printf("your Grade is : B");
	}
	else if(avg>=50){
		printf("your Grade is : C");
	}
	else if(avg>=35){
		printf("your Grade is : D");
	}
	else{
		printf("Sorry,You Have Failed The Examination.");
	}









	
}







