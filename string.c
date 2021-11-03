#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int n = 11;
	char* p1 = "technology";	// 문자열 길이 제한 없음
	char* p2;
	char p3[11] = "mirim";	// 최대 '\0' 포함하여 11자, 한글은 최대 5자까지 가능
	char* a[3] = { "meister", "software", "coding" };	// 각각 문자열 길이 제한 없음
	char str[3][11];	// '\0' 포함하여 최대 11자의 문자열을 3개 가질 수 있음

	printf("\np1이 직접소유한 문자열 : %s\n", p1);

	p1 = "artificial";	// p1이 어떤 주소를 갖게 되고, 초기값보다 길이가 같거나 짧으므로 가능한 문장
	printf("\n[p1 이 간접소유한 문자열을 artificial로 변경함]\n");
	printf("\np1이 간접소유한 문자열 : %s\n", p1);

	// 문자열 저장을 위해 n바이트만큼 힙(Heap) 영역에서 동적할당 받음
	p2 = (char*)malloc(sizeof(char) * n);

	printf("\n\n[문자열 develop를 p2가 간접 소유하게 함]\n");
	p2 = "develop";
	printf("\np2가 간접소유한 문자열 : %s\n", p2);

	//p3 = "mirimBravo"; 불가함. 배열요소는 반복구문없이 동시 사용은 불가함

	printf("\n\n[배열 p3가 직접소유한 문자열 : %s\n]", p3);
	printf("\n[p3가 간접소유한 문자열을 mirimBravo로 변경함]\n");
	strcpy_s(p3, 11, "mirimBravo");
	printf("\n배열 p3의 변경된 문자열 : %s\n", p3);

	printf("\n\n[배열 p3에 문자열 입력받기]\n");
	printf("\n문자열 입력[한글 5자 이내]: ");
	scanf_s("%s", p3, 11);
	getchar();	// 엔터키 흡수. 다음 gets_s()함수가 입력 버퍼에 남아있는 엔터키 가져가는 것을 방지

	printf("\n배열 p3에 입력된 문자열 출력: %s\n", p3);
	printf("\n\n[gets_s로 문자열 입력받기]\n\nstr[0]에 입력할 문자열[한글 5자 이내]: ");

	// gets_s()함수는 공백 포함하여 입력받음. 길이 이상 입력하면 입력 취소됨
	gets_s(str[0], 11);	// gets_s()함수는 입력 버퍼에서 엔터키를 갖고 와서 버림

	// gets_s(a[0], 11); a[0]는 크기가 불명확한 저장소의 주소를 갖고 있어 입력에 사용불가

	printf("\n\n[fgets로 str[1]에 입력받기]\n\nstr[1]에 입력할 문자열[한글 5자 이내]: ");
	fgets(str[1], 11, stdin);	// 공백 포함하여 10char까지 입력 받고 끝에 '\0' 자동으로 붙음
	// 9char 이하이면 '엔터' 도 입력받음. 11char 이상 입력하여도 10char까지 잘라 입력받음

	printf("\n------------ 설정 또는 입력된 문자열 출력 ------------\n");
	printf("\nstr[0]: %s\n", str[0]);
	printf("\nstr[1]: %s\n", str[1]);
	printf("\na[0]: %s\na[1]: %s\na[2]: %s\n", a[0], a[1], a[2]);
	printf("\n\n포인터 배열 a의 각 행 주소");
	printf("\na[0]: %p\na[1]: %p\na[2]: %p\n\n", a[0], a[1], a[2]);

	return 0;

}