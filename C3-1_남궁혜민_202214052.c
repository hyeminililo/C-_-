/*
�б� : 2023 1�б�
���� : C���α׷���
���� : C3_1
�Ҽ� : IT���������պ�
�̸� : ��������
�й� : 202214052
*/
#include <stdio.h>

int main(void) {
	double x, y, result=0;
	char op;
	// scanf_s�� �̿��� �Ǽ� �Է� �ޱ�
	printf("ù ��° �Ǽ��� �Է��ϼ���: ");
	scanf_s("%lf", &x);

	printf("�� ��° �Ǽ��� �Է��ϼ���: ");
	scanf_s("%lf", &y);
	
	printf("'+': ����, '-':����, '*':����, '/':������ \n");
	
	printf("������ ������ �����ϼ���: ");
	scanf_s(" %c", &op, 1);
	//���ǹ� if~else���� �̿��� ������ ����
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
	// else�� �����ڰ� +,-,*,/ �� �ƴ� �� "�߸��� �����Դϴ�." ���
	else
		printf("�߸��� �����Դϴ�.\n");
	return 0;
}