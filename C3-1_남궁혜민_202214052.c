/*
학기 : 2023 1학기
과목 : C프로그래밍
과제 : C3_1
소속 : IT융합자율합부
이름 : 남궁혜민
학번 : 202214052
*/
#include <stdio.h>

int main(void) {
	double x, y, result=0;
	char op;
	// scanf_s를 이용해 실수 입력 받기
	printf("첫 번째 실수를 입력하세요: ");
	scanf_s("%lf", &x);

	printf("두 번째 실수를 입력하세요: ");
	scanf_s("%lf", &y);
	
	printf("'+': 덧셈, '-':뺄셈, '*':곱셈, '/':나눗셈 \n");
	
	printf("연산의 종류를 선택하세요: ");
	scanf_s(" %c", &op, 1);
	//조건문 if~else문을 이용해 연산자 수행
	if( op == '+'|| op == '-'|| op == '*'|| op == '/') {
		if (op == '+')
		{
			result = x + y;
		}
		else if (op == '-')
		{
			result = x - y;
		}
		else if (op == '*')
		{
			result = x * y;
		}
		else if (op == '/')
		{
			result = x / y;
		}
		printf("%.2lf %c %.2lf = %.2lf\n", x, op, y, result);
	}
	// else로 연산자가 +,-,*,/ 가 아닐 때 "잘못된 연산입니다." 출력
	else
		printf("잘못된 연산입니다.\n");
	return 0;
}