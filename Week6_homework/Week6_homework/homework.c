#include <stdio.h>

typedef struct node
{
	struct node* lchild;
	struct node* rchild;
	char data;
} node; 
node *root, *temp, *ptr;

node* makeTree(char data) {				//��带 �����
	ptr = (node*)malloc(sizeof(node));
	ptr->data = data;
	ptr->lchild = NULL;
	ptr->rchild = NULL;
	return ptr;
}
void PreOrderPrintTree(node* node);
void InOrderPrintTree(node* node);
void PostOrderPrintTree(node* node);

/* ���� ��ȸ */
void InOrderPrintTree(node* node)
{
	if (node == NULL)
		return;

	// ���� ���� Ʈ�� ���
	InOrderPrintTree(node->lchild);

	// �θ� ��� ���
	printf(" %c", node->data);

	// ������ ���� Ʈ�� ���
	InOrderPrintTree(node->rchild);
}

/* ���� ��ȸ */
void PreOrderPrintTree(node* node)
{
	if (node == NULL)
		return;

	// �θ� ��� ���
	printf(" %c", node->data);

	// ���� ���� Ʈ�� ���
	PreOrderPrintTree(node->lchild);

	// ������ ���� Ʈ�� ���
	PreOrderPrintTree(node->rchild);
}

/* ���� ��ȸ */
void PostOrderPrintTree(node* node)
{
	if (node == NULL)
		return;

	// ���� ���� Ʈ�� ���
	PostOrderPrintTree(node->lchild);

	// ������ ���� Ʈ�� ���
	PostOrderPrintTree(node->rchild);

	// �θ� ��� ���
	printf(" %c", node->data);
}

void main()
{
	// ��� ����
	node* r1 = makeTree('A');
	node* r2 = makeTree('B');
	node* r3 = makeTree('C');
	node* r4 = makeTree('D');
	node* r5 = makeTree('E');
	node* r6 = makeTree('F');
	node* r7 = makeTree('G');

	// Ʈ���� ��� �߰�
	root = r1;
	r1->lchild = r2;
	r2->lchild = r3;
	r2->rchild = r4;

	r1->rchild = r5;
	r5->lchild = r6;
	r5->rchild = r7;

	// Ʈ�� ���
	printf("������ ���� A B C D E F G�� ���������� ���ʷ� �Է� \n\n");
	
	printf("InOrder...\n");
	InOrderPrintTree(r1);
	printf("\n\n");
	
	printf("PreOrder...\n");
	PreOrderPrintTree(r1);
	printf("\n\n");
	
	printf("PostOrder...\n");
	PostOrderPrintTree(r1);
	printf("\n");

	system("pause");
}
