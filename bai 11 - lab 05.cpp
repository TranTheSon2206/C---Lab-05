//Cau 11:Tìm giai th?a c?a m?t s? nguyên. 
#include<stdio.h>

int getFactorial(int n){
	int factorial = 1;
	for(int i = n; i > 0; i--){
		factorial *= i;
	}
	return factorial;
}

int main(){
	int n, factorial = 1;
	while(1){
		printf("Enter a natural number: ");
		scanf("%d", &n);
		if(n >= 0){
			break;
		}
	}
	factorial = getFactorial(n);
	printf("%d! = %d", n, factorial);
	
	return 0;
}
