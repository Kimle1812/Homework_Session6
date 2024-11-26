#include<stdio.h>
int main(){
	int i, number; 
	printf("Nhap mot so nguyen: ");
	scanf("%d", &i);
	printf("So %d co cac uoc la\n", i); 
	for(int number = 1; number <= i; ++number){
		if(i % number == 0){
			printf("%d\n", number); 
		}
	}
	return 0; 
} 
