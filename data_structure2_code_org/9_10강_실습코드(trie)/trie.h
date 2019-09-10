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
	node_t *base;  // Trie의 시작점 - base의 left가 root노드가 된다
	int nodeCnt;
}Trie;

bool initTrie(Trie *tp); // 초기화 함수
node_t* trieSearch(Trie *tp, int key); // 노드 검색 함수
node_t * trieInsert(Trie *tp, int key); // 노드 추가 함수
node_t * trieDelete(Trie *tp, int key); // 노드 삭제 함수
node_t *makeNode(int key);  // 새 노드 생성 함 
void trieDestory(Trie *tp);  // Trie 소멸 함수 
void postorderDelete(node_t *np); // 후위순회 방식으로 노드 삭제하는 함수 
void postoderTraverse(node_t *np); // 후위순회 함수 
#endif // _TRIE_H_수 
