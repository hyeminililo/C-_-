/*
�б� : 2023 1�б�
���� : C���α׷���
���� : C3_2
�Ҽ� : IT���������պ�
�̸� : ��������
�й� : 202214052
*/
#include <stdio.h>

	int main(void) {
		// month ���� ����
		int month;
		// scanf_s�� �̿��� �Է� �ޱ�
		printf("���� �Է��ϼ���: ");
		scanf_s("%d", &month);
		//���ǹ� switch���� �̿��� �б⿡ ������ ��� 
		switch (month) {
			case 1:
			case 2:
			case 3:
				printf("%d���� 1�б��Դϴ�.", month);
				break;
			case 4:
			case 5:
			case 6:
				printf("%d���� 2�б��Դϴ�.", month);
				break;
			case 7:
			case 8:
			case 9:
				printf("%d���� 3�б��Դϴ�.", month);
				break;
			case 10:
			case 11:
			case 12:
				printf("%d���� 4�б��Դϴ�.", month);
				break;
			default:
					printf("�߸��� �Է��Դϴ�."); // case�� ��찡 �ƴ� �� "�߸��� �Է��Դϴ�." ���
		}
		return 0;
	}
	