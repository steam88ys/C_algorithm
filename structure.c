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
	
	//구조체 st1의 멤버에 입력함

	printf("학번(4자리): ");
	scanf_s("%s", st1.hakbun, 5);
	getchar(); //입력 버퍼에 남겨진 엔터키 흡수

	printf("성명(5자내): ");
	gets_s(st1.name, 11); //gets_s()합수는 엔터키 갖고와서 버림

	printf("나이: ");
	scanf_s("%d", &st1.age);
	getchar();
	
	printf("전화번호: ");
	gets_s(st1.te1, 14);

	//다음 구조체의 학번에 null을 자동 입력
	strcpy_s(st[0].hakbun, 5, "null");

	printf("계속 입력이면 y 누르고, 그만 입력이면 n 누름: ");
	scanf_s("%c", &yn, 1);
	
	//배열 구조체 st[]에 반복하여 입력
	while((yn == 'y' || yn == 'Y') && i < 20 && st[0].hakbun!="null") {
		printf("학번(4자리): ");
		scanf_s("%s", st[i].hakbun, 5);
			getchar(); //입력 버퍼에 남겨진 엔터키 흡수

		printf("성명(5자내): ");
		gets_s(st[i].name, 11); //gets_s()함수는 엔터키 갖고와서 버림

		printf("나이: ");
		scanf_s("%d", &st[i].age);
		getchar();

		printf("전화번호: ");
		gets_s(st[i].te1, 14);

		//다음 구조체의 학번에 null을 자동 입력
		strcpy_s(st[i + 1].hakbun, 5, "null");

		printf("계속 입력이면 y 누르고, 그만 입력이면 n 누름: ");
		scanf_s("%c", &yn, 1);
		getchar();

		i++;
	}
	printf("입력한 학생 정보 그대로 출력\n\n");
	printf("학번\t성명\t나이\t전화번호\n");
	printf("%s\t%s\t%d\t%s\n", st1.hakbun, st1.name, st1.age, st1.te1);

	i = 0;
	while (strcmp(st[i].hakbun, "null") != 0) {
		printf("%s\t%s\t%d\t%s\n", st[i].hakbun, st[i].name, st[i].age, st[i].te1);
		i++;
	}

	return 0;
}