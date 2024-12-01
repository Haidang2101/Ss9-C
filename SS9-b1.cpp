#include <stdio.h>
int main(){
	
	int array[100];
	int n;
	
	do{
	printf("nhap so phan tu muon nhap vao mang trong khoang [0; 100]: ");
	scanf("%d", &n);	
	}while(n < 0 || n > 100);
		
	for (int i = 0; i < n; i++){
	printf("nhap phan tu vao mang array[%d]: ", i);
	scanf("%d", &array[i]);
	}
	
	int addValue, localValue;

	printf("nhap gia tri muon them vao mang: ");
	scanf("%d", &addValue);
	printf("nhap vi tri mang: ");
	scanf("%d", &localValue);
	
	array[localValue] = addValue;
	
	return 0;
}
