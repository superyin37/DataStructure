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
//void swap(int a, int b)
//{
//	int c = a;
//	a = b;
//	b = c;
//}
//
//
//void quickSort(int a[], int n,int head, int end)
//{
//	if (head >= end) { return ; }
//	int pivot = head;
//	int left = head + 1;
//	int right = end;
//	//printf("pivot=%d,head=%d,end=%d, ", pivot,head,end);
//	while (left < right) 
//	{
//		while (right > left && a[right] >= a[pivot])
//		{
//			right--;
//		}
//		while(right > left && a[left] <= a[pivot])
//		{
//			left++;
//		}
//		//printf("left=%d", left);
//		if (right > left) 
//		{ 
//			int tmp = a[left]; 
//			a[left] = a[right]; 
//			a[right] = tmp; 
//		}
//	}
//	if (a[right] < a[pivot]) 
//	{ 
//		int tmp = a[right]; 
//		a[right] = a[pivot]; 
//		a[pivot] = tmp; 
//		pivot = right;
//	}
//	/*pivot = right; */
//	quickSort(a, n, head, pivot - 1);
//	quickSort(a, n, pivot + 1, end);
//}
//
//
//int main() {
//	int array1[8] = { 4,3,5,1,9,6};
//	printArray(array1, 6);
//	quickSort(array1, 6,0,5); 
//	printArray(array1, 6);
//	int array2[10] = { 4,3,5,1,20,9,2,4,6,1 };
//	printArray(array2, 10);
//	quickSort(array2, 10, 0, 9);
//	printArray(array2, 10);
//	int array3[7] = { 7,7,8,7,7,7,7 };
//	printArray(array3,7);
//	quickSort(array3, 7, 0, 6);
//	printArray(array3, 7);
//	return 0;
//}