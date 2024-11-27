#include<stdio.h>
int main(){
	int number = 2, i;
	printf("Moi ban nhap mot so nguyen duong: ");
	scanf("%d", &i);
	while(number <= i){
		++number; 
	}
	if(i % number == 0){
			printf("So ban nhap la so nguyen to"); 
		} else {
			printf("So ban nhap khong phai so nguyen to"); 
		} 
	return 0; 
} 
