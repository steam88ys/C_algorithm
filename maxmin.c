#include <stdio.h>

int main(void) {

	int a, b, c, min, mid, max;

	scanf_s("%d", &a);
	min = a, mid=a, min = a;
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	
	if (a > b) {
		max = a;
		min = b;
	}
	else {
		max = b;
		min = a;
	}	
	if (max < c) {
		mid = max;
		max = c;
		
	}
	else {
		if (min > c) {
			mid = min;
			min = c;
		}
		else {
			mid = c;
		}
	}

	/*if (a > b && a > c) {
		max = a;
		if (b > c) {
			min = c;
			mid = b;
		}
		else{
			min = b;
			mid = c;
		}
	}
	else if (b > a && b > c) {
		max = b;
		if (a > c) {
			min = c;
			mid = a;
		}
		else{
			min = a;
			mid = c;
		}
	}
	else {
		max = c;
		if (a > b) {
			min = b;
			mid = a;
		}else{
			min = a;
			mid = b;
		}
	}*/

	printf("�ּҰ� : %d, �߰���: %d, �ִ밪 : %d", min, mid, max);

}