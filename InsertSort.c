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
//	//�ӵڶ���Ԫ�ؿ�ʼ�Ƚ�
//	for (int i = 1; i < n; i++) 
//	{
//		//��i��Ԫ����֮ǰ�����бȽϲ�����
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