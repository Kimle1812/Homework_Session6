#include<stdio.h>
int main(){
	int number;
	printf("Moi ban nhap mot so co ba chu so: ");
	scanf("%d", &number);
	int a, b, c;
	a = number / 100;
	b = number % 100 /10;
	c = number % 10;
	if(a * a * a + b * b * b + c * c * c == number){
		printf("So ban nhap là so Armstrong"); 
	} else {
		printf("So ban nhap khong phai là so Armstrong");
	}
	return 0; 
	 
} 
