#include <stdio.h>
#include <string.h>

int main(void) {

	struct student {
		char hakbun[5];
		char name[11];
		int age;
		char te1[14];
	} st1;

	struct student st[20];
	char yn = 'y';
	int i = 0;
	
	//����ü st1�� ����� �Է���

	printf("�й�(4�ڸ�): ");
	scanf_s("%s", st1.hakbun, 5);
	getchar(); //�Է� ���ۿ� ������ ����Ű ���

	printf("����(5�ڳ�): ");
	gets_s(st1.name, 11); //gets_s()�ռ��� ����Ű ����ͼ� ����

	printf("����: ");
	scanf_s("%d", &st1.age);
	getchar();
	
	printf("��ȭ��ȣ: ");
	gets_s(st1.te1, 14);

	//���� ����ü�� �й��� null�� �ڵ� �Է�
	strcpy_s(st[0].hakbun, 5, "null");

	printf("��� �Է��̸� y ������, �׸� �Է��̸� n ����: ");
	scanf_s("%c", &yn, 1);
	
	//�迭 ����ü st[]�� �ݺ��Ͽ� �Է�
	while((yn == 'y' || yn == 'Y') && i < 20 && st[0].hakbun!="null") {
		printf("�й�(4�ڸ�): ");
		scanf_s("%s", st[i].hakbun, 5);
			getchar(); //�Է� ���ۿ� ������ ����Ű ���

		printf("����(5�ڳ�): ");
		gets_s(st[i].name, 11); //gets_s()�Լ��� ����Ű ����ͼ� ����

		printf("����: ");
		scanf_s("%d", &st[i].age);
		getchar();

		printf("��ȭ��ȣ: ");
		gets_s(st[i].te1, 14);

		//���� ����ü�� �й��� null�� �ڵ� �Է�
		strcpy_s(st[i + 1].hakbun, 5, "null");

		printf("��� �Է��̸� y ������, �׸� �Է��̸� n ����: ");
		scanf_s("%c", &yn, 1);
		getchar();

		i++;
	}
	printf("�Է��� �л� ���� �״�� ���\n\n");
	printf("�й�\t����\t����\t��ȭ��ȣ\n");
	printf("%s\t%s\t%d\t%s\n", st1.hakbun, st1.name, st1.age, st1.te1);

	i = 0;
	while (strcmp(st[i].hakbun, "null") != 0) {
		printf("%s\t%s\t%d\t%s\n", st[i].hakbun, st[i].name, st[i].age, st[i].te1);
		i++;
	}

	return 0;
}