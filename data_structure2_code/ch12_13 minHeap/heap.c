#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

/*--------------------------------------------------------------
Function name	: createHeap() - �� ���� �Լ�
Parameters		: hp - �� ����ü�� �ּ�
				  size - ���� ũ��(���� ������ �������� ����)
Return value	: ���� �����ϸ� TRUE, �����ϸ� FALSE ����
--------------------------------------------------------------*/
bool_t createHeap(heap_t *hp, int size) {

	// TODO
	 
}

/*--------------------------------------------------------------
Function name	: isHeapEmpty() - ���� ������ ��� �ִ°� �˻�
Parameters		: hp - �� ����ü�� �ּ�
Return value	:������ ��� ������ TRUE / ��� ���� ������ FALSE
--------------------------------------------------------------*/
bool_t isHeapEmpty(heap_t *hp) {

	// TODO
	
}

/*--------------------------------------------------------------
Function name	: isHeapFull() - ���� �� �� �ִ°� �˻�
Parameters		: hp - �� ����ü�� �ּ�
Return value	:�� �� ������ TRUE / �� �� ���� ������ FALSE ����
--------------------------------------------------------------*/
bool_t isHeapFull(heap_t *hp) {

	// TODO
	
}

/*--------------------------------------------------------------
Function name	: insertHeap () - ���� ������  �ϳ��� �߰�
Parameters		: hp - �� ����ü�� �ּ�
				  intData - ���� ������ ������
Return value	:���������� �����ϸ� TRUE ���� / �����ϸ� FALSE ����
--------------------------------------------------------------*/
bool_t insertHeap(heap_t *hp, int inData) {
	
	// TODO
}
/*--------------------------------------------------------------
Function name	: reHeapUp() - ���� ��带 ��ġ�� �°� up ��Ŵ
Parameters		: hp - �� ����ü�� �ּ� / child - heapUp ��� �ε���
Return value	:����
--------------------------------------------------------------*/
void reHeapUp(heap_t *hp, int child) {

	int parent;
	int tmp;
	
	// TODO
	
}
/*--------------------------------------------------------------
Function name	: printHeape() - �� ���� ������ ���(����->���� ����)
Parameters		: hp - �� ����ü�� �ּ�
Returns			: ����
--------------------------------------------------------------*/
void printHeap(const heap_t *hp) {

	// TODO

}

/*----------------------------------------------------------------------
Function name	: deleteHeap() - ���� ������ �ϳ��� ����
Parameters		: hp - �� ����ü�� �ּ�
				  getData - ���� ���� ������ ���庯���� �ּ�
Return value	: ���������� �����ϸ� TRUE, �����ϸ� FALSE
----------------------------------------------------------------------*/
bool_t deleteHeap(heap_t *hp, int *getData) {

	// TODO
}

/*--------------------------------------------------------------
Function name	: reHeapDown() - ���� ��带 ��ġ�� �°� down ��Ŵ
Parameters		: hp - �� ����ü�� �ּ�
				  parent - heapDown ��� ������ �ε���
Returns			: ����
--------------------------------------------------------------*/
void reHeapDown(heap_t *hp, int parent) {
	int left, right;
	int child, tmp;
	
	// TODO
}

/*--------------------------------------------------------------
Function name	: destroyHeap() - �� �Ҹ� �Լ�
Parameters		: hp - �� ����ü�� �ּ�
Returns			: ����
--------------------------------------------------------------*/
void destroyHeap(heap_t *hp) {

	// TODO

}
