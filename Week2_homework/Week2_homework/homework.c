#include <stdio.h> 
#include <stdlib.h>
#define SIZE 5 /*5개의 숫자 값을 콘솔에서 입력 받기 위한 단순 매크로(define) 선언*/
struct node {
	int data;
	struct node * link;
};
int main() {
	struct node * head = NULL;
	struct node * temp = NULL;
	int i = 0;
	head = (struct node *)malloc(sizeof(struct node));
	temp = head;
	printf("과제 [연결리스트 구현 프로그램]\n");
	printf("head의 주소값 : %d, temp의 주소값 : %d\n", head, temp);

	for (i = 0; i < SIZE; i++) {
		printf("입력 : ", i + 1);
		scanf("%d", &temp->data);
		printf("주소 = %d, 데이터 = %d\n", temp, temp->data);
		/*입력를 받기 위해 scanf함수 선언하고 for문을 정하고 i범위를 i < SIZE라고 정함, 그리고 I++를 함. */
	}
	free(head); //노드 해제
	free(temp);
	system("pause");
}