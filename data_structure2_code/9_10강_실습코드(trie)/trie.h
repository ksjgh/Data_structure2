#ifndef _TRIE_H_
#define _TRIE_H_
#include<stdlib.h>
#define BIT(key, b) ( ((key&(1<<(b))) != 0)?1 : 0 )
typedef enum { FALSE, TRUE } bool;

typedef struct _node
{
	struct _node *left;
	struct _node *right;
	int key;
}node_t;
typedef struct _trie
{
	node_t *base;  // Trie�� ������ - base�� left�� root��尡 �ȴ�
	int nodeCnt;
}Trie;

bool initTrie(Trie *tp); // �ʱ�ȭ �Լ�
node_t* trieSearch(Trie *tp, int key); // ��� �˻� �Լ�
node_t * trieInsert(Trie *tp, int key); // ��� �߰� �Լ�
node_t * trieDelete(Trie *tp, int key); // ��� ���� �Լ�
node_t *makeNode(int key);  // �� ��� ���� �� 
void trieDestory(Trie *tp);  // Trie �Ҹ� �Լ� 
void postorderDelete(node_t *np); // ������ȸ ������� ��� �����ϴ� �Լ� 
void postoderTraverse(node_t *np); // ������ȸ �Լ� 
#endif // _TRIE_H_�� 
