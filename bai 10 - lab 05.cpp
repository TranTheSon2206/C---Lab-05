//Cau 10:Nh?p vào m?t s? nguyên trong kho?ng 0 ? 31. Chuy?n s? nguyên dó sang d?ng nh? phân(luu ý  không dùng hàm itoa()). 
//Unit 10. Convert numbers in range (0-31) to binary
#include<stdio.h>

//Reverse array
void reverse(int array[], int length){
	for(int i = 0; i < length/2; i++){
		int temp = array[i];
		array[i] = array[length - 1 - i];
		array[length - 1 - i] = temp;
	}
}

//Display array
void showArray(int array[], int length){
  for(int i = 0; i < length; i++)  printf("%d", array[i]);  
  printf("\n");
}

int main(){
	int n, length, surplus[1000];
	while(1){
		printf("Enter a number (0-31): ");
		scanf("%d", &n);
		if(n > 0 && n < 31){
			break;
		}
	}
	//get the surplus when divided by 2
	for(int i = 0; n != 0; i++){
		surplus[i] = n % 2;
		n = n / 2;
		length = i + 1;
	}
	//Reverse and show
	reverse(surplus, length);
	printf("Binary representation: ");
	showArray(surplus, length);
	
	return 0;
}
