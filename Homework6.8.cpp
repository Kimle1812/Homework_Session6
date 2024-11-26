#include<stdio.h>
int main(){
	int goc, lai, month;
	printf("Moi ban nhap so tien goc: ");
	scanf("%d", &goc);
	printf("Moi ban nhap so thang gui: ");
	scanf("%d", &month);
	printf("Moi ban nhap phan tram lai suat hang thang: ");
	scanf("%d", &lai);
	float tong_tien = goc * (1 + lai / 100) ^ month;
	printf("So tien nhan duoc la %.2f\n", tong_tien);
	float tien_lai = tong_tien - goc;
	printf("So tien lai la %.2f\n", tien_lai); 
	return 0; 
	
} 
