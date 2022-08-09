//Cau 9: Vi?t chuong trình tìm t?t c? các u?c s? c?a s? nguyên duong N nh?p t? bàn phím. 
//Unit 9. Find divisors of N
#include<stdio.h>

int main(){
	int n;
	while(1){
		printf("Enter a positive integer: ");
		scanf("%d", &n);
		if(n > 0){
			break;
		}
	}
	
	printf("Divisors of %d:\n", n);
	for(int i = 1; i <= n; i++){
		if(n % i == 0) {
			printf("%d ", i);
		}
	}
	return 0;
}
