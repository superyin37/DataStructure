//#define _CRT_SECURE_NO_WARNINGS 1
//#include <Stdio.h>
//#include <Stdlib.h>
//#define ARRAY_MAX_LEN 9999
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
//void merge(int a[], int s, int m, int e) {
//	int i = s; int  j = m + 1; int k = 0; int p[ARRAY_MAX_LEN] = { 0 };
//	while (i <= m && j <= e) {
//		if (a[i] <= a[j]) {
//			p[k++] = a[i++];
//		}
//		else { p[k++] = a[j++]; }
//	}
//	while (i <= m) { p[k++] = a[i++]; }
//	while (j <= e) { p[k++] = a[j++]; }
//	//printArray(p,k);
//
//	for (int m = 0; m < k; m++) {
//		a[s + m] = p[m];
//	}
//}
//
//
//void mergeSort(int a[], int s, int e) {
//	if (s >= e) { return; }
//	int m = (s + e) / 2;
//	mergeSort(a, s, m);
//	mergeSort(a, m + 1, e);
//	merge(a, s, m, e);
//	
//}	
//
//
//
//
//
//int main() {
//	int array1[8] = { 4,3,5,1,9,6};
//	printArray(array1, 6);
//	mergeSort(array1,0,5); 
//	printArray(array1, 6);
//	int array2[10] = { 4,3,5,1,20,9,2,4,6,1 };
//	printArray(array2, 10);
//	mergeSort(array2, 0, 9);
//	printArray(array2, 10);
//	int array3[7] = { 7,7,8,7,7,7,7 };
//	printArray(array3,7);
//	mergeSort(array3, 0, 6);
//	printArray(array3, 7);
//	return 0;
//}