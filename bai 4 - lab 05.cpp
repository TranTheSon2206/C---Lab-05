//cau 4:Vi?t chuong tr�nh cho ph�p nh?p c�c k� t? t? b�n ph�m, th�ng b�o k� t? v?a nh?p l� ch? c�i, ch?s? hay k� t? d?c bi?t. Chuong tr�nh s? d?ng khi nh?p v�o k� t? tr?ng.
#include<stdio.h>
#include<stdlib.h>

void checkCharacter(){
	char userInput;
	int enter = 10; //ASCII encoding of 'Enter'
	int space = 32; //ASCII encoding of 'Space'
	while(1){
		fflush(stdin);
		printf("Enter a Character: ");
		scanf("%c", &userInput);
		//Use the ASCII encoding to find out the character type
		//Exit when entering a space
		if(userInput == enter){
			continue;
		}
		else if(userInput == space){
			exit(0);
		}
		else if(userInput >= 'a' && userInput <= 'z' || userInput >= 'A' && userInput <= 'Z'){
			printf("%c is a alphabet\n", userInput);
		}
		else if(userInput >= '0' && userInput <= '9'){
			printf("%c is a number\n", userInput);
		}
		else {
			printf("%c is a special character\n", userInput);
		}
	}
}

int main(){
	checkCharacter();
	return 0;
}
