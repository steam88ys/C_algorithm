#include <stdio.h> 

void InsertionSort(int a[], int n)
{
	int i, j, key;
	for (i = 1; i < n; i++) {
		key = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (key >= a[j])  break;
			else  a[j + 1] = a[j];  //���������� �� ĭ �̵�
		}
		a[j + 1] = key;  //��濡 Ű ���� �ִ´�
	}
}

int main(void) 
{
	int a[] = { 23, 107, 14, 13, 10, 18, 100, 90, 85, 97 };
	int n = sizeof(a) / sizeof(int);		// a�� 40, int�� 4  =>  n�� 10
	InsertionSort(a, n);
	printf("�������� : ");
	for (int i = 0; i < n; i++) printf("%5d", a[i]);
	return 0;
}