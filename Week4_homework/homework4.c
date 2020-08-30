#include <stdio.h>

typedef struct node
{
	struct node *lchild;
	char data;
	struct node *rchild;
} node;
node *root, *temp, *ptr;

node *makeTree(char data)
{ //��带 �����
	ptr = (node *)malloc(sizeof(node));
	ptr->data = data;
	ptr->lchild = NULL;
	ptr->rchild = NULL;
	return ptr;
}

int main(void)
{

	printf("������ ���� 1 2 3 4 5 6�� ���������� ���ʷ� �Է� \n");
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

	printf("root�� �ּ� =%d, root�� data = %c\n", &root, root->data);
	temp = root;
	temp = temp->lchild;
	printf("root�� lchild�� �ּ� =%d,  data = %c\n", &temp, temp->data);
	printf("B �������� lchild�� �ּ� =%d, data = %c\n", &temp->lchild, temp->lchild->data);
	printf("B �������� rchild�� �ּ� =%d, data = %c\n", &temp->rchild, temp->rchild->data);

	temp = root;
	temp = temp->rchild;
	printf("root�� rchild�� �ּ� =%d,  data = %c\n", &temp, temp->data);
	printf("C �������� lchild�� �ּ� =%d, data = %c\n", &temp->lchild, temp->lchild);
	printf("C �������� rchild�� �ּ� =%d, data = %c\n", &temp->rchild, temp->rchild->data);

	printf("\n");
	system("pause");
}