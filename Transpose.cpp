#include<stdio.h>
int main() {
	
	int arr[5][4] ={
	{1,2,3,4},
	{5,6,7,8,},
	{9,10,11,12},
	{13,14,15,16},
	{17,18,19,20}};
	
	int rows = 5;
	
	int column = 4;
	
	int i,j;
	
	for(i = 0; i < rows; i++) {
		
		for(j = i + 1; j < column; j++) {
			
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
				
		}
	}
	
	for(i = 0; i < column; i++) {
		
		for(j = 0; j < rows; j++) {
			
			printf("%d  ",arr[i][j]);
			
		}
		
	printf("\n");
	
	}
	
}
