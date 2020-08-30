#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
};

struct Node *head;

struct Node *new_node(int a)
{
	struct Node *new_node2 = (struct Node *)malloc(sizeof(struct Node));
	new_node2->data = a;
	new_node2->prev = NULL;
	new_node2->next = NULL;

	printf("숫자 = %d\n", a);
	printf("변수 data의 시작주소 = %d\n", &new_node2->data);
	printf("포인터변수 앞 시작주소 = %d\n", &new_node2->prev);
	printf("포인터변수 뒤 시작주소 = %d\n", &new_node2->next);
	printf("포인터 구조체 변수 new_node2의 주소 = %p\n", &new_node2);
	printf("new_node2가 가진 구조체의 주소 = %d\n\n", new_node2);

	return new_node2;
}

void InsertAtHead(int a)
{
	struct Node *new_node2 = new_node(a);
	if (head == NULL)
	{
		head = new_node2;
		return;
	}

	head->prev = new_node2;
	new_node2->next = head;
	head = new_node2;
}

void InsertAtTail(int a)
{
	struct Node *temp = head;
	struct Node *new_node2 = new_node(a);
	if (head == NULL)
	{
		head = new_node2;
		return;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node2;
	new_node2->prev = temp;
}

void Print()
{
	struct Node *temp = head;
	printf("순차: ");
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void ReversePrint()
{
	struct Node *temp = head;
	if (temp == NULL)
		return;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	printf("역순: ");
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->prev;
	}
	printf("\n");
}

void Input_Func(int *arr)
{
	printf("숫자 5개 입력 : \n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		printf("\n");
	}
}
int main(int argc, const char *argv[])
{

	int node_data[MAX];
	Input_Func(node_data);

	head = NULL;

	for (int i = 0; i < MAX; i++)
	{
		InsertAtTail(node_data[i]);
	}

	Print();
	ReversePrint();
	system("pause");
}