//cau 2:Vi?t chuong trình nh?p m?t s? nguyên duong b?t k?, tính t?ng các ch? s? c?a nó s?, d?ng vòng  l?p for. 

#include<stdio.h>

void getSumDigits(){
	int n, surplus, sumDigits = 0;
	while(1){
		printf("Enter a positive integer: ");
		scanf("%d", &n);
		if(n > 0){
			break;
		}
	}

	for(;n != 0;){
		surplus = n % 10;
		sumDigits += surplus;
		n = n / 10;
	}
	printf("Sum of digits: %d", sumDigits);
}

int main(){
	getSumDigits();
	return 0;
}
