#include <stdio.h> 
#include <stdlib.h>
#define SIZE 5 /*5���� ���� ���� �ֿܼ��� �Է� �ޱ� ���� �ܼ� ��ũ��(define) ����*/
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
	printf("���� [���Ḯ��Ʈ ���� ���α׷�]\n");
	printf("head�� �ּҰ� : %d, temp�� �ּҰ� : %d\n", head, temp);

	for (i = 0; i < SIZE; i++) {
		printf("�Է� : ", i + 1);
		scanf("%d", &temp->data);
		printf("�ּ� = %d, ������ = %d\n", temp, temp->data);
		/*�Է¸� �ޱ� ���� scanf�Լ� �����ϰ� for���� ���ϰ� i������ i < SIZE��� ����, �׸��� I++�� ��. */
	}
	free(head); //��� ����
	free(temp);
	system("pause");
}