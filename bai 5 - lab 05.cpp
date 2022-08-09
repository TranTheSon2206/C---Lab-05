//cau 5. viet code theo flowchart
#include<stdio.h>

int main(){
	int num, result = 0;
	while(1){
		printf("Input num: ");
		scanf("%d", &num);
		if(num >= 0 && num < 100){
			result++;
		}
		else break;
	}
	
	printf("Result = %d", result);
	
	return 0;
}
