//cau 1 : in ra so chan
#include<stdio.h>

void showEvenNumber(){
	int i;
	printf("Even numbers 1-100:\n");
	for(i = 2; i <= 100; i += 2){
		printf("%d ", i);
	}
}

int main(){
	showEvenNumber();
	return 0;
}
