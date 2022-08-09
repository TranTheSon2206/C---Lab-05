//cau 7:Nh?p v�o s? nguy�n duong N(luu � ki?m tra di?u ki?n N>0), vi?t ra m�n h�nh d�y Fibonaci nh? hon N. VD: nh?p v�o 25 s? in ra m�n h�nh d�y Fibonaci: 0 1 1 2 3 5 8 13 21 
#include<stdio.h>

int inputInteger(){
	int userInput;
	while(1){
		printf("Enter a positive integer (N > 0): ");
		scanf("%d", &userInput);
		if(userInput > 0){
			break;
		}
	}
	return userInput;
}

void displayFibonaci(){
	int userInput;
	int fibo[1000];
	userInput = inputInteger();
	printf("Display fibonacci sequence less than %d:\n", userInput);
	for(int i = 0; ; i++){
		if(i == 0){
			fibo[i] = 0;
		}
		else if(i == 1){
			fibo[i] = 1;
		}
		else {
			fibo[i] = fibo[i-1] + fibo[i-2];
		}
		
		if(fibo[i] < userInput){
			printf("%d ", fibo[i]);
		}
		else{
			break;
		}
	}
}

int main(){
	displayFibonaci();
	return 0;
}
