#include <stdio.h> 

void InsertionSort(int a[], int n)
{
	int i, j, key;
	for (i = 1; i < n; i++) {
		key = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (key >= a[j])  break;
			else  a[j + 1] = a[j];  //오른쪽으로 한 칸 이동
		}
		a[j + 1] = key;  //빈방에 키 값을 넣는다
	}
}

int main(void) 
{
	int a[] = { 23, 107, 14, 13, 10, 18, 100, 90, 85, 97 };
	int n = sizeof(a) / sizeof(int);		// a는 40, int는 4  =>  n은 10
	InsertionSort(a, n);
	printf("삽입정렬 : ");
	for (int i = 0; i < n; i++) printf("%5d", a[i]);
	return 0;
}