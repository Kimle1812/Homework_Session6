#include<stdio.h>
int main(){
	int even = 0, old = 0, number;
	for(int i = 1; i <= 5; ++i){
		printf("Moi ban nhap mot so nguyen: ");
		scanf("%d", &number);
		if(number == 0){
			even = even + 1;
			old = old +1;
		} else if(number % 2 == 0){
	    	even = even + 1;
	    } else {
	    	old = old +1; 
		} 
	}
	printf("Co %d so chan trong cac so ban nhap\n", even);
	printf("Co %d so le trong cac so ban nhap\n", old);
	return 0; 
} 
