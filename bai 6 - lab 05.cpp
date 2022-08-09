//cau 6: Vi?t chuong tr�nh in b?ng c?u chuong c?a s? N(1<=N<=9). Sau m?i l?n in chuong tr�nh h?i ngu?i d�ng c� ti?p t?c kh�ng, n?u nh?p �Y� s? ti?p t?c, nh?p �N� s? k?t th�c chuong tr�nh
#include<stdio.h>

int checkYesNo(){
	char userInput;
	int check = 3;
	while(check == 3){
		fflush(stdin);
		printf("Do you want to continue (Y/N): ");
		scanf("%c", &userInput);
		if(userInput == 'y' || userInput == 'Y'){
			check = 1;
		}
		else if(userInput == 'n' || userInput == 'N'){
			check = 0;
		}
		else {
			check = 3;
		}
	}
	return check;
}

void displayMultiplicationTable(){
	int n, check;
	while(1){
		printf("Enter a number (1-9): ");
		scanf("%d", &n);
		if(n >= 1 && n <= 9){
			for(int i = 1; i <= 10; i++){
				printf("%d x %d = %d\n", n, i, n * i);
			}
			check = checkYesNo();
			if(check == 0){
				break;
			}
			//n = 0; //reset n
		}
	}
}

int main(){
	displayMultiplicationTable();
	return 0;
}
