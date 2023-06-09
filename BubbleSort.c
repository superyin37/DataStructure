//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
//
//void printArray(int array[], int n) {
//	for (int i = 0; i < n; i++) {
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//}
//
//
//
//void bubbleSort(int array[], int n) {
//	printf("Bubble sort start:\n");
//	for (int i = n-1; i!=0; i--) {
//		for (int j = 0; j < i; j++) {
//			if (array[j] > array[j + 1]) {
//				int tmp = array[j];
//				array[j] = array[j + 1];
//				array[j + 1] = tmp;
//			}
//		}
//		printArray(array, n);
//	}
//	printf("Over.\n");
//}
//
//
//int main() {
//	int array[8] = { 49,38,65,97,76,13,27,49 };
//	printArray(array, 8);
//	bubbleSort(array, 8);
//	return 0;
//}