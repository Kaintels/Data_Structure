#include <stdio.h>

typedef struct node
{
	struct node* lchild;
	struct node* rchild;
	char data;
} node; 
node *root, *temp, *ptr;

node* makeTree(char data) {				//노드를 만든다
	ptr = (node*)malloc(sizeof(node));
	ptr->data = data;
	ptr->lchild = NULL;
	ptr->rchild = NULL;
	return ptr;
}
void PreOrderPrintTree(node* node);
void InOrderPrintTree(node* node);
void PostOrderPrintTree(node* node);

/* 중위 순회 */
void InOrderPrintTree(node* node)
{
	if (node == NULL)
		return;

	// 왼쪽 하위 트리 출력
	InOrderPrintTree(node->lchild);

	// 부모 노드 출력
	printf(" %c", node->data);

	// 오른쪽 하위 트리 출력
	InOrderPrintTree(node->rchild);
}

/* 전위 순회 */
void PreOrderPrintTree(node* node)
{
	if (node == NULL)
		return;

	// 부모 노드 출력
	printf(" %c", node->data);

	// 왼쪽 하위 트리 출력
	PreOrderPrintTree(node->lchild);

	// 오른쪽 하위 트리 출력
	PreOrderPrintTree(node->rchild);
}

/* 후위 순회 */
void PostOrderPrintTree(node* node)
{
	if (node == NULL)
		return;

	// 왼쪽 하위 트리 출력
	PostOrderPrintTree(node->lchild);

	// 오른쪽 하위 트리 출력
	PostOrderPrintTree(node->rchild);

	// 부모 노드 출력
	printf(" %c", node->data);
}

void main()
{
	// 노드 생성
	node* r1 = makeTree('A');
	node* r2 = makeTree('B');
	node* r3 = makeTree('C');
	node* r4 = makeTree('D');
	node* r5 = makeTree('E');
	node* r6 = makeTree('F');
	node* r7 = makeTree('G');

	// 트리에 노드 추가
	root = r1;
	r1->lchild = r2;
	r2->lchild = r3;
	r2->rchild = r4;

	r1->rchild = r5;
	r5->lchild = r6;
	r5->rchild = r7;

	// 트리 출력
	printf("임의의 문자 A B C D E F G를 레벨순으로 차례로 입력 \n\n");
	
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
