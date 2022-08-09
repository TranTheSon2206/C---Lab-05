//cau 8:Vi?t chuong trình nh?p vào N s?, tìm s? l?n nh?t, s? nh? nh?t. 
#include<stdio.h>

int getMin(int arr[], int length){
	int i, minValue;
	minValue = arr[0];
	for(i = 1; i < length; i++){
		if(arr[i] < minValue){
			minValue = arr[i];
		}
	}
	return minValue;
}

int getMax(int arr[], int length){
	int i, maxValue;
	maxValue = arr[0];
	for(i = 1; i < length; i++){
		if(arr[i] > maxValue){
			maxValue = arr[i];
		}
	}
	return maxValue;
}

int main(){
	int arr[1000], n;
	int minValue, maxValue;
	printf("Enter total numbers: ");
	scanf("%d", &n);
	printf("------------\n");
	for(int i = 0; i < n; i++){
		printf(">>");
		scanf("%d", &arr[i]);		
	}
	printf("------------\n");
	minValue = getMin(arr, n);
	maxValue = getMax(arr, n);
	printf("Min number = %d\n", minValue);
	printf("Max number = %d", maxValue);
	
	return 0;
}
