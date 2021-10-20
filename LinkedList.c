#include <stdlib.h>
#include <stdio.h>

int main(void) {
	char input;
	struct mode {		// 구조체   data, link
		char data;
		struct mode* link;
	};
	struct mode *head, * p;
	head = (struct mode*)malloc(sizeof(struct mode));	// 사용은 5byte지만 8byte로 계산됨 (할당은 8byte) 최종적으로 *0이 됨
	head->data = ' ';
	head->link = NULL;
	printf("Data 입력 : ");scanf_s("%c", &input);
	getchar();
	p = head;
	while (input != '0') {
		p->link = (struct mode*)malloc(sizeof(struct mode));
		p = p->link;
		p->data = input;
		p->link = NULL;
		printf("입력Data(0이면 종료) : ");
		scanf_s("%c", &input);
		getchar();
	}
	p = head->link;
	while (p != NULL) {
		if (p->link != NULL) printf("%c -> ", p->data);
		else printf("%c", p->data);
		p = p->link;
	}
	return 0;
}	