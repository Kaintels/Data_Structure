#include <stdio.h>

typedef struct node
{
	struct node *lchild;
	char data;
	struct node *rchild;
} node;
node *root, *temp, *ptr;

node *makeTree(char data)
{ //노드를 만든다
	ptr = (node *)malloc(sizeof(node));
	ptr->data = data;
	ptr->lchild = NULL;
	ptr->rchild = NULL;
	return ptr;
}

int main(void)
{

	printf("임의의 숫자 1 2 3 4 5 6을 레벨순으로 차례로 입력 \n");
	node *r1 = makeTree('1');
	node *r2 = makeTree('2');
	node *r3 = makeTree('3');
	node *r4 = makeTree('4');
	node *r5 = makeTree('5');
	node *r7 = makeTree('6');

	root = r1;
	r1->lchild = r2;
	r1->rchild = r3;
	r2->lchild = r4;
	r2->rchild = r5;
	r3->rchild = r7;

	printf("root의 주소 =%d, root의 data = %c\n", &root, root->data);
	temp = root;
	temp = temp->lchild;
	printf("root의 lchild의 주소 =%d,  data = %c\n", &temp, temp->data);
	printf("B 데이터의 lchild의 주소 =%d, data = %c\n", &temp->lchild, temp->lchild->data);
	printf("B 데이터의 rchild의 주소 =%d, data = %c\n", &temp->rchild, temp->rchild->data);

	temp = root;
	temp = temp->rchild;
	printf("root의 rchild의 주소 =%d,  data = %c\n", &temp, temp->data);
	printf("C 데이터의 lchild의 주소 =%d, data = %c\n", &temp->lchild, temp->lchild);
	printf("C 데이터의 rchild의 주소 =%d, data = %c\n", &temp->rchild, temp->rchild->data);

	printf("\n");
	system("pause");
}