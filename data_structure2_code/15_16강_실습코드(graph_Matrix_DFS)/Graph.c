#include <stdio.h>
#include "Graph.h"

int grp[MAX][MAX];
int vertex;
int edge;
int visited[MAX];
int stack[MAX];
int top;
int cnt;
/*--------------------------------------------------------------
Function name	: createGraph() - graph 생성 함수(인접행렬법) 
Parameters		: 없음 
Return value	: 없음 
--------------------------------------------------------------*/
void createGraph(void) {
	char s;
	char e;
	int i;
	int j;
	
	// TODO
}
/*--------------------------------------------------------------
Function name	: printGraph() - graph 출력  함수(인접행렬 형태) 
Parameters		: 없음 
Return value	: 없음 
--------------------------------------------------------------*/
void printGraph(void) {
	int i;
	int j;

	printf("%2s", "");
	for (i=0 ; i<vertex ; i++) {
		printf("%2c", i + 'A');
	}
	printf("\n");

	for (i=0 ; i<vertex ; i++) {
		printf("%2c", i + 'A');
		for (j=0 ; j<vertex ; j++) {
			printf("%2d", grp[i][j]);
		}
		printf("\n");
	}
}

/*--------------------------------------------------------------
Function name	: startDFS() - 깊이우선탐색 유도 함수
                               (그래프내의 모든 단절된 그래프 탐색) 
Parameters		: 없음 
Return value	: 없음 
--------------------------------------------------------------*/
void startDFS(void) {
	int i;

	for (i=0 ; i<vertex ; i++) {
		visited[i] = 0;
	}
	cnt = 0;

	for (i=0 ; i<vertex ; i++) {
		if (visited[i] == 0) {
			cnt++;
			reDFS(i);
			printf("\n");
		}
	}
}

/*--------------------------------------------------------------
Function name	: DFS() - 하나의 연결그래프를 깊이우선 탐색하는 함수
                          (반복문 사용) 
Parameters		: u - 깊이우선 탐색의 시작 정점 번호 
Return value	:없음 
--------------------------------------------------------------*/
void DFS(int u) {
	int v;
	top = 0;
	
	// TODO
	
}

/*--------------------------------------------------------------
Function name	: reDFS() - 하나의 연결그래프를 깊이우선 탐색하는 함수
                          (재귀함수 사용) 
Parameters		: u - 깊이우선 탐색의 시작 정점 번호 
Return value	:없음 
--------------------------------------------------------------*/
void reDFS(int u) {
	int v;
	
	// TODO
	
}




