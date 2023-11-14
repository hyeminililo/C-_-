/*
학기 : 2023 1학기
과목 : C프로그래밍
과제 : C3_2
소속 : IT융합자율합부
이름 : 남궁혜민
학번 : 202214052
*/
#include <stdio.h>

	int main(void) {
		// month 변수 선언
		int month;
		// scanf_s를 이용해 입력 받기
		printf("월을 입력하세요: ");
		scanf_s("%d", &month);
		//조건문 switch문을 이용해 분기에 나눠서 출력 
		switch (month) {
			case 1:
			case 2:
			case 3:
				printf("%d월은 1분기입니다.", month);
				break;
			case 4:
			case 5:
			case 6:
				printf("%d월은 2분기입니다.", month);
				break;
			case 7:
			case 8:
			case 9:
				printf("%d월은 3분기입니다.", month);
				break;
			case 10:
			case 11:
			case 12:
				printf("%d월은 4분기입니다.", month);
				break;
			default:
					printf("잘못된 입력입니다."); // case의 경우가 아닐 시 "잘못된 입력입니다." 출력
		}
		return 0;
	}
	