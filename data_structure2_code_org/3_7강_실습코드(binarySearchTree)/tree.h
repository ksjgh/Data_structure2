#ifndef TREE_H_
#define TREE_H_

typedef struct _node Node;
typedef struct _node
{
	int data;   // ������ ���� ���
	Node *left;      // ���� �ڽ� ��带 ����Ű�� ������ ���
	Node *right;     // ������ �ڽ� ��带 ����Ű�� ������ ���
}Node;

typedef struct _tpee
{
	Node *root;   // Ʈ���� head node�� ����Ű�� ������ ���
	int nodeCnt;  // �� ����� ����
}Tree;

void initTree(Tree *tp);              // Ʈ�� ���� ����ü�� �ʱ�ȭ �ϴ� �Լ�
Node * makeNode(int data, Node *, Node *);   // �� ��带 ����� ������� �ּҸ� �����ϴ� �Լ�
Node *addNode(Tree *tp, int data);    // ��带 �����ϴ� �Լ�
void inorderTraverse(Node *np);    // ������ȸ(���� ������ ���)
void preorderTraverse(Node *np);       // ������ȸ
void postorderTraverse(Node *np);    // ������ȸ
Node * searchNode(Tree *tp, int data);   // data�� �ش��ϴ� ��� �˻� / ã�� ����� �ּ� ����, ��ã���� NULL ����
Node * deleteNode(Tree *tp, int data);  // data�� �ش��ϴ� ��� ���� / ������ ����� parent�� �ּ� ����
void destroyTree(Tree * tp);    // tree���� ��� ��� ����(tree �Ҹ�)
void postorderDelete(Node *np); // postorder(���� ��ȸ)����� ��� ���� ���ȣ�� �Լ�

#endif /* TREE_H_ */

