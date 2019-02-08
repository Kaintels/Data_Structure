#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct queue_node {
	char name[10];
	struct queue_node *link;
} queue_node;
queue_node *front = NULL, *rear = NULL, *new_node = NULL, *ptr = NULL;
//�̸��� �Է��ϱ� ���� char name[10] �Է�
void insertQ(char* name) {
	new_node = malloc(sizeof(queue_node));
	if (new_node == NULL) {
		printf("memory allocation error\n");
		exit(1);
	}
	strcpy(new_node->name, name);
	new_node->link = NULL;
	if (front == NULL)
		front = new_node;
	else
		rear->link = new_node;
	rear = new_node;
	printf("insert���� rear�� �� = %d, insert�Ǿ� ���Ե� data = %s\n", rear, new_node->name);
}
// insertQ�� ����
char deleteQ() {
	char temp[10] = { NULL };
	if (front == NULL) {
		printf("queue empty.\n");
		exit(1);
	}
	strcpy(temp, front->name);
	ptr = front;
	front = front->link;
	free(ptr);
	if (front == NULL) rear = NULL;
	printf("delete���� front�� �� = %d, delete�Ǿ� ������ data = %s\n", front, temp);
	return 0;
}
// deleteQ�� ����
main() {

	int  suntaek;
	char item[10];

	for (;;) {
		printf("1:insertQ  2:deleteQ  3:���� ...? ");
		scanf_s("%d", &suntaek);

		switch (suntaek)
		{
		case 1:
			printf("�̸��� �Է����ּ��� : ");
			scanf("%s", item);
			insertQ(item);
			break;
		case 2:
			deleteQ();
			break;
		case 3:
			printf("\n���α׷� ����... \n");
			system("pause");
		}
	}
	return 0;
}
// ť ����