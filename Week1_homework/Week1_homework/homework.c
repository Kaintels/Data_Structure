#include <stdio.h>
#define SIZE 5
/*5개의 숫자 값을 콘솔에서 입력 받기 위한 단순 매크로(define)랑 printf함수 선언*/
void main()
{
	int number[SIZE];
	int i = 0;
	printf("과제 [배열 구현 프로그램] \n");
	printf("총 5개의 숫자를 입력하시오. \n");
	/*입력를 받기 위해  scanf함수 선언하고 for문을 정하고 i범위를 i < SIZE라고 정함, 그리고 I++를 함. */
	for (i = 0; i < SIZE; i++)
	{
		printf("입력 : ");
		scanf("%d", &number[i]);
	}
	/*입력 순서의 역순서로 나타나기 위해 for문에 SIZE -1과 i>=0, i-- 선언*/
	for (i = SIZE - 1; i >= 0; i--)
	{
		printf("i[%d]의 주소 = %d, 데이터 = %d \n", i, &number[i], number[i]);
	}
	system("pause");
}