#include<stdio.h>
#include<stdlib.h>
#include "trie.h"
/*----------------------------------------------------
Function name	: initTrie - Trie 초기화 함수
Parameters		: tp - Trie 관리 구조체
Return value	: 성공하면 true / 실패하면 false
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
 Function name	: trieSearch - 노드 검색 함수
 Parameters		: tp - Trie 관리 구조체
				  key - 검색 데이터
 Return value	: 찾은 노드의 주소 / 실패하면 NULL pointer
 ------------------------------------------------------*/
node_t * trieSearch(Trie *tp, int key)
{
	node_t *t, *p;
	int b = 0;
	
	// TODO
	
	return NULL;  // 리턴값은 수정하세요. 
}
/*----------------------------------------------------
Function name	: makeNode - key값으로 새 노드를 만들어 시작 주소 반환함수 
Parameters		: key - 새 노드를 만들 데이터
Return value	: 성공 - 새 노드의 주소 / 실패 - NULL pointer
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
Function name	: trieInsert - 노드 추가 함수
Parameters		: tp - Trie 관리 구조체
				  key - 추가 데이터
Return value	: 추가한 노드의 주소 / 실패하면 NULL pointer
------------------------------------------------------*/
node_t * trieInsert(Trie *tp, int key)
{
	node_t *gpar, *par, *t;
	int b = 0; // 검사 비트
		
	// TODO
	
	return NULL;  // 리턴값은 수정하세요. 

}
/*----------------------------------------------------
Function name	: trieDelete - 노드 삭제 함수
Parameters		: tp - Trie 관리 구조체
				  key - 삭제 데이터
Return value	: 노드의 주소 / 실패하면 NULL pointer
------------------------------------------------------*/
node_t * trieDelete(Trie *tp, int key)
{
	node_t *gpar, *par, *del, *sib, *start;
	int b = 0, startb;
		
	// TODO
	
	return NULL;  // 리턴값은 수정하세요. 

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
Function name	: trieDestroy - Trie 소멸 함수 
Parameters		: tp - Trie 관리 구조체
Return value	: 없음
------------------------------------------------------*/
void trieDestory(Trie *tp)  // Trie 소멸 함수 
{
	postorderDelete(tp->base->left);  // 데이터 노드는 순회 하며 삭제
	free(tp->base);
	tp->base = NULL;
	tp->nodeCnt = 0;
}

/* --------------------------------------------------------------------------------------
Function name 	: postorderDelete - postorder(후위 순회)방식의 노드 삭제(재귀호출 함수)
Parameters		: np - 방문할 노드의 주소
Returns 		: 없음
---------------------------------------------------------------------------------------*/
void postorderDelete(node_t *np)
{
	if (np != NULL)
	{
		postorderDelete(np->left);
		postorderDelete(np->right);
		printf("%4d", np->key);
		free(np);  // 노드 삭제
	}
}
