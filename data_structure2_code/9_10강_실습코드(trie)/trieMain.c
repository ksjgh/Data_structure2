#include<stdio.h>
#include<string.h>
#include "trie.h"

int main(void) {
	Trie trie;
	char initData[] = "AIBJCD";
	int size = strlen(initData);  // Trie에 삽입한 노드의 수 계산
	int i;
	node_t *p;
	char delData[] = "CIBXB";

	if (initTrie(&trie) == FALSE) {
		return 1;
	}
	for (i = 0; i < size; i++) {
		if (trieInsert(&trie, initData[i]) == NULL) {
			printf("%c : Insert Failed!!\n", initData[i]);
		}
	}
	postoderTraverse(trie.base->left);
	printf("\n");

	for (i = 'A'; i < 'K'; i++) {
		if ((p = trieSearch(&trie, i)) == NULL) {
			printf("%c => Search Failed!!\n", i);
		}
		else {
			printf("%c => Search Success\n", p->key);
		}
	}
	
	
	size = strlen(delData); 
	for (i = 0; i < size; i++) {
		if (trieDelete(&trie, delData[i]) == NULL) {
			printf("%c => Delete Failed!!\n", delData[i]);
		}
		else {
			printf("%c => Delete Success\n", delData[i]);
			postoderTraverse(trie.base->left);
			printf("\n");
		}
	}
	trieDestory(&trie);
	return 0;
}
