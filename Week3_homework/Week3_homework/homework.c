#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct queue_node {
	char name[10];
	struct queue_node *link;
} queue_node;
queue_node *front = NULL, *rear = NULL, *new_node = NULL, *ptr = NULL;
//이름을 입력하기 위해 char name[10] 입력
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
	printf("insert후의 rear의 값 = %d, insert되어 삽입된 data = %s\n", rear, new_node->name);
}
// insertQ의 설명
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
	printf("delete후의 front의 값 = %d, delete되어 삭제된 data = %s\n", front, temp);
	return 0;
}
// deleteQ의 설명
main() {

	int  suntaek;
	char item[10];

	for (;;) {
		printf("1:insertQ  2:deleteQ  3:종료 ...? ");
		scanf_s("%d", &suntaek);

		switch (suntaek)
		{
		case 1:
			printf("이름을 입력해주세요 : ");
			scanf("%s", item);
			insertQ(item);
			break;
		case 2:
			deleteQ();
			break;
		case 3:
			printf("\n프로그램 종료... \n");
			system("pause");
		}
	}
	return 0;
}
// 큐 동작