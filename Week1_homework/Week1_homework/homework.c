#include <stdio.h>
#define SIZE 5
/*5���� ���� ���� �ֿܼ��� �Է� �ޱ� ���� �ܼ� ��ũ��(define)�� printf�Լ� ����*/
void main()
{
	int number[SIZE];
	int i = 0;
	printf("���� [�迭 ���� ���α׷�] \n");
	printf("�� 5���� ���ڸ� �Է��Ͻÿ�. \n");
	/*�Է¸� �ޱ� ����  scanf�Լ� �����ϰ� for���� ���ϰ� i������ i < SIZE��� ����, �׸��� I++�� ��. */
	for (i = 0; i < SIZE; i++)
	{
		printf("�Է� : ");
		scanf("%d", &number[i]);
	}
	/*�Է� ������ �������� ��Ÿ���� ���� for���� SIZE -1�� i>=0, i-- ����*/
	for (i = SIZE - 1; i >= 0; i--)
	{
		printf("i[%d]�� �ּ� = %d, ������ = %d \n", i, &number[i], number[i]);
	}
	system("pause");
}