#include<stdio.h>
int main(){
	int pass = 18122003, i;
	printf("Moi ban nhap mat khau:");
	scanf("%d", &i);
	if(i == pass){
		printf("Ban da nhap dung mat khau roi\n"); 
	} else {
		printf("Ban da nhap sai mat khau roi\n "); 
	}
	return 0;	 
} 
