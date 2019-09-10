#ifndef HEAP_H_
#define HEAP_H_
#define MAX 100										/* heap�� �ִ� ���� ������ �� */
typedef enum _bool { FALSE, TRUE } bool_t;

typedef struct _heap {
   int *heap;										/* heap ���� */
   int size;										/* heap�� ũ�� */
   int count;										/* heap�� ����Ǿ� �ִ� �������� �� */
} heap_t;

bool_t createHeap(heap_t *hp, int size);			/* �� ���� �Լ� */
bool_t isHeapEmpty(heap_t *hp);						/* ���� ������ ��� �ִ°� �˻� */
bool_t isHeapFull(heap_t *hp);						/* ���� �� �� �ִ°� �˻� */
bool_t insertHeap(heap_t *hp, int inData);			/* ���� ������ ���� */
bool_t deleteHeap(heap_t *hp, int *getData);		/* ���� ������ ���� */
void reHeapUp(heap_t *hp, int child);
void reHeapDown(heap_t *hp, int parent);			/* ���� ��带 ��ġ�� �°� down ��Ŵ */
void printHeap(const heap_t *hp);					/* ���� ������ ���(����->���� ����) */
void destroyHeap(heap_t *hp);						/* �� �Ҹ� �Լ� */

#endif /* HEAP_H_ */
