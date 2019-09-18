#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"

int visited[MAX_VERTEX];
int queue[MAX_VERTEX];
int front;
int rear;
int cnt;

/*---------------------------------------------------------------
Function Name	: initGraph() - 그래프 관리 구조체 초기화 함수
Argument		: gp - 그래프 관리 구조체 포인터
Return			: 인접리스트 생성 성공 시 TRUE / 실패 시 FALSE
---------------------------------------------------------------*/
bool_t initGraph(graph_t *gp) {
	int i;
	char s;
	char e;

	// TODO
}

/*---------------------------------------------------------------
Function Name : addNode() - 그래프 관리 구조체 초기화 함수
Argument	: gp - 그래프 관리 구조체 포인터
				v1 - 간선을 구성하는 첫 번째 정점 번호
				v2 - 간선을 구성하는 두 번째 정점 번호
Return		: 노드 생성 및 추가 성공 시 TRUE / 실패 시 FALSE
---------------------------------------------------------------*/
bool_t addNode(graph_t *gp, int v1, int v2) {
	node_t *n1;
	node_t *n2;
	
	// TODO
	
}

/*---------------------------------------------------------------
Function Name 	: outputGraph() - 그래프 출력 함수
Argument		: gp - 그래프 관리 구조체 포인터
Return			: 없음
---------------------------------------------------------------*/
void outputGraph(graph_t *gp) {
	int i;
	node_t *cur;

	// TODO
}


/*---------------------------------------------------------------
Function Name 	: destroyGraph() - 그래프 관리 구조체 내의 동적할당 해제 및 초기화 함수
Argument		: gp - 그래프 관리 구조체 포인터
Return			: 없음
---------------------------------------------------------------*/
void destroyGraph(graph_t *gp) {
	int i;
	node_t *delNode;

	// TODO
}

/*---------------------------------------------------------------
Function Name 	: startBFS() - 방문하지 않은 정점을 확인하고 너비우선탐색을 수행하는 함수
Argument		: gp - 그래프 관리 구조체 포인터
Return			: 없음
---------------------------------------------------------------*/
void startBFS(graph_t *gp) {
	int i;

	if (gp == NULL) {
		return;
	}

	for (i=0 ; i<gp->vertexCnt ; i++) {
		visited[i] = 0;
	}
	front = 0;
	rear = 0;
	cnt = 0;

	for (i=0 ; i<gp->vertexCnt ; i++) {
		if (visited[i] == 0) {
			cnt++;
			BFS(gp, i);
			printf("\n");
		}
	}
}

/*---------------------------------------------------------------
Function Name	: BFS() - 너비우선탐색 수행 함수
Argument		: gp - 그래프 관리 구조체 포인터 / s - 출발정점
Return			: 없음
---------------------------------------------------------------*/
void BFS(graph_t *gp, int s) {
	int v;
	node_t *cur;
	
	// TODO
	
}
