#include <stdlib.h>
#include <stdio.h>

int main(void) {
	char input;
	struct mode {		// ����ü   data, link
		char data;
		struct mode* link;
	};
	struct mode *head, * p;
	head = (struct mode*)malloc(sizeof(struct mode));	// ����� 5byte���� 8byte�� ���� (�Ҵ��� 8byte) ���������� *0�� ��
	head->data = ' ';
	head->link = NULL;
	printf("Data �Է� : ");scanf_s("%c", &input);
	getchar();
	p = head;
	while (input != '0') {
		p->link = (struct mode*)malloc(sizeof(struct mode));
		p = p->link;
		p->data = input;
		p->link = NULL;
		printf("�Է�Data(0�̸� ����) : ");
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