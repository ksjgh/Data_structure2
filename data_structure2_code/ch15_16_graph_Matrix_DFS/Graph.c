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
Function name	: createGraph() - graph ���� �Լ�(������Ĺ�) 
Parameters		: ���� 
Return value	: ���� 
--------------------------------------------------------------*/
void createGraph(void) {
	char s;
	char e;
	int i;
	int j;
	
	// TODO
}
/*--------------------------------------------------------------
Function name	: printGraph() - graph ���  �Լ�(������� ����) 
Parameters		: ���� 
Return value	: ���� 
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
Function name	: startDFS() - ���̿켱Ž�� ���� �Լ�
                               (�׷������� ��� ������ �׷��� Ž��) 
Parameters		: ���� 
Return value	: ���� 
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
Function name	: DFS() - �ϳ��� ����׷����� ���̿켱 Ž���ϴ� �Լ�
                          (�ݺ��� ���) 
Parameters		: u - ���̿켱 Ž���� ���� ���� ��ȣ 
Return value	:���� 
--------------------------------------------------------------*/
void DFS(int u) {
	int v;
	top = 0;
	
	// TODO
	
}

/*--------------------------------------------------------------
Function name	: reDFS() - �ϳ��� ����׷����� ���̿켱 Ž���ϴ� �Լ�
                          (����Լ� ���) 
Parameters		: u - ���̿켱 Ž���� ���� ���� ��ȣ 
Return value	:���� 
--------------------------------------------------------------*/
void reDFS(int u) {
	int v;
	
	// TODO
	
}




