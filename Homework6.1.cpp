#include<stdio.h>
int main(){
	int i, number, tong;
	for(int i = 1; i <= 5; ++i){
		printf("Moi ban nhap mot so nguyen: ");
		scanf("%d", &number);
	    if(number % 2 != 0){
		    tong = tong + number;
	    }
	}
	printf("Tong cua cac so le là %d\n", tong); 
	return 0; 
} 
