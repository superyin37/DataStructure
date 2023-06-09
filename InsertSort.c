//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
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
//void insertSort(int a[], int n) 
//{
//	printf("Insert sort start:\n");
//	//从第二个元素开始比较
//	for (int i = 1; i < n; i++) 
//	{
//		//第i个元素与之前的序列比较并插入
//		for (int j = 0; j < i; j++) 
//		{
//			if (a[j] > a[i]) 
//			{
//				int tmp = a[i];
//				for (int k = i-1; k >= j; k--) 
//				{
//					a[k + 1] = a[k];
//				}
//				a[j] = tmp;
//			}
//		}
//		printArray(a, n);
//	}
//	printf("Over.\n");
//}
//
//
//int main() {
//	int array[8] = { 4,3,5,1,9,6};
//	printArray(array, 6);
//	insertSort(array, 6);
//	return 0;
//}