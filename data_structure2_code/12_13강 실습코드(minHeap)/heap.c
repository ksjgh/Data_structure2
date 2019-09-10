#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

/*--------------------------------------------------------------
Function name	: createHeap() - 힙 생성 함수
Parameters		: hp - 힙 구조체의 주소
				  size - 힙의 크기(저장 가능한 데이터의 개수)
Return value	: 생성 성공하면 TRUE, 실패하면 FALSE 리턴
--------------------------------------------------------------*/
bool_t createHeap(heap_t *hp, int size) {

	// TODO
	 
}

/*--------------------------------------------------------------
Function name	: isHeapEmpty() - 힙이 완전히 비어 있는가 검사
Parameters		: hp - 힙 구조체의 주소
Return value	:완전히 비어 있으면 TRUE / 비어 있지 않으면 FALSE
--------------------------------------------------------------*/
bool_t isHeapEmpty(heap_t *hp) {

	// TODO
	
}

/*--------------------------------------------------------------
Function name	: isHeapFull() - 힙이 꽉 차 있는가 검사
Parameters		: hp - 힙 구조체의 주소
Return value	:꽉 차 있으면 TRUE / 꽉 차 있지 않으면 FALSE 리턴
--------------------------------------------------------------*/
bool_t isHeapFull(heap_t *hp) {

	// TODO
	
}

/*--------------------------------------------------------------
Function name	: insertHeap () - 힙에 데이터  하나를 추가
Parameters		: hp - 힙 구조체의 주소
				  intData - 힙에 저장할 데이터
Return value	:성공적으로 삭제하면 TRUE 리턴 / 실패하면 FALSE 리턴
--------------------------------------------------------------*/
bool_t insertHeap(heap_t *hp, int inData) {
	
	// TODO
}
/*--------------------------------------------------------------
Function name	: reHeapUp() - 지정 노드를 위치에 맞게 up 시킴
Parameters		: hp - 힙 구조체의 주소 / child - heapUp 대상 인덱스
Return value	:없음
--------------------------------------------------------------*/
void reHeapUp(heap_t *hp, int child) {

	int parent;
	int tmp;
	
	// TODO
	
}
/*--------------------------------------------------------------
Function name	: printHeape() - 힙 내의 데이터 출력(상위->하위 방향)
Parameters		: hp - 힙 구조체의 주소
Returns			: 없음
--------------------------------------------------------------*/
void printHeap(const heap_t *hp) {

	// TODO

}

/*----------------------------------------------------------------------
Function name	: deleteHeap() - 힙에 데이터 하나를 삭제
Parameters		: hp - 힙 구조체의 주소
				  getData - 힙에 꺼낸 데이터 저장변수의 주소
Return value	: 성공적으로 삭제하면 TRUE, 실패하면 FALSE
----------------------------------------------------------------------*/
bool_t deleteHeap(heap_t *hp, int *getData) {

	// TODO
}

/*--------------------------------------------------------------
Function name	: reHeapDown() - 지정 노드를 위치에 맞게 down 시킴
Parameters		: hp - 힙 구조체의 주소
				  parent - heapDown 대상 데이터 인덱스
Returns			: 없음
--------------------------------------------------------------*/
void reHeapDown(heap_t *hp, int parent) {
	int left, right;
	int child, tmp;
	
	// TODO
}

/*--------------------------------------------------------------
Function name	: destroyHeap() - 힙 소멸 함수
Parameters		: hp - 힙 구조체의 주소
Returns			: 없음
--------------------------------------------------------------*/
void destroyHeap(heap_t *hp) {

	// TODO

}
