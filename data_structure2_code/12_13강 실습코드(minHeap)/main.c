#include <stdio.h>
#include "heap.h"

int main(void) {
	int num;
	int cnt;
	heap_t heap;
	int i;

	freopen("data.txt", "r", stdin);

	createHeap(&heap, MAX);
	scanf("%d", &cnt);
	for (i=0 ; i<cnt ; i++) {
		scanf("%d", &num);
		insertHeap(&heap, num);
	}
	printHeap(&heap);

	for (i=0 ; i<=cnt ; i++) {
		deleteHeap(&heap, &num) ? printf("[%d]���\n", num) : printf("��½���!!!\n");
		printHeap(&heap);
	}

	destroyHeap(&heap);

	return 0;
}
