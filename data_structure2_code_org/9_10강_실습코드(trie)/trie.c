#include<stdio.h>
#include<stdlib.h>
#include "trie.h"
/*----------------------------------------------------
Function name	: initTrie - Trie �ʱ�ȭ �Լ�
Parameters		: tp - Trie ���� ����ü
Return value	: �����ϸ� true / �����ϸ� false
------------------------------------------------------*/
bool initTrie(Trie *tp)
{
	if (tp == NULL) {
		return FALSE;
	}
	tp->base = (node_t *)calloc(1, sizeof(node_t));
	tp->base->key = 0;
	tp->nodeCnt = 0;
	return TRUE;
}
/*----------------------------------------------------
 Function name	: trieSearch - ��� �˻� �Լ�
 Parameters		: tp - Trie ���� ����ü
				  key - �˻� ������
 Return value	: ã�� ����� �ּ� / �����ϸ� NULL pointer
 ------------------------------------------------------*/
node_t * trieSearch(Trie *tp, int key)
{
	node_t *t, *p;
	int b = 0;
	
	// TODO
	
	return NULL;  // ���ϰ��� �����ϼ���. 
}
/*----------------------------------------------------
Function name	: makeNode - key������ �� ��带 ����� ���� �ּ� ��ȯ�Լ� 
Parameters		: key - �� ��带 ���� ������
Return value	: ���� - �� ����� �ּ� / ���� - NULL pointer
------------------------------------------------------*/
node_t *makeNode(int key)
{
	node_t *t;
	if ((t = (node_t *)calloc(1, sizeof(node_t))) == NULL) {
		return NULL;
	}
	else {
		t->key = key;
	}
	return t;
}
/*----------------------------------------------------
Function name	: trieInsert - ��� �߰� �Լ�
Parameters		: tp - Trie ���� ����ü
				  key - �߰� ������
Return value	: �߰��� ����� �ּ� / �����ϸ� NULL pointer
------------------------------------------------------*/
node_t * trieInsert(Trie *tp, int key)
{
	node_t *gpar, *par, *t;
	int b = 0; // �˻� ��Ʈ
		
	// TODO
	
	return NULL;  // ���ϰ��� �����ϼ���. 

}
/*----------------------------------------------------
Function name	: trieDelete - ��� ���� �Լ�
Parameters		: tp - Trie ���� ����ü
				  key - ���� ������
Return value	: ����� �ּ� / �����ϸ� NULL pointer
------------------------------------------------------*/
node_t * trieDelete(Trie *tp, int key)
{
	node_t *gpar, *par, *del, *sib, *start;
	int b = 0, startb;
		
	// TODO
	
	return NULL;  // ���ϰ��� �����ϼ���. 

}

void postoderTraverse(node_t *np)
{
	if (np != NULL) {
		postoderTraverse(np->left);
		postoderTraverse(np->right);
		printf("%4d", np->key);
	}
}
/*----------------------------------------------------
Function name	: trieDestroy - Trie �Ҹ� �Լ� 
Parameters		: tp - Trie ���� ����ü
Return value	: ����
------------------------------------------------------*/
void trieDestory(Trie *tp)  // Trie �Ҹ� �Լ� 
{
	postorderDelete(tp->base->left);  // ������ ���� ��ȸ �ϸ� ����
	free(tp->base);
	tp->base = NULL;
	tp->nodeCnt = 0;
}

/* --------------------------------------------------------------------------------------
Function name 	: postorderDelete - postorder(���� ��ȸ)����� ��� ����(���ȣ�� �Լ�)
Parameters		: np - �湮�� ����� �ּ�
Returns 		: ����
---------------------------------------------------------------------------------------*/
void postorderDelete(node_t *np)
{
	if (np != NULL)
	{
		postorderDelete(np->left);
		postorderDelete(np->right);
		printf("%4d", np->key);
		free(np);  // ��� ����
	}
}
