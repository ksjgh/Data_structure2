#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"

int visited[MAX_VERTEX];
int queue[MAX_VERTEX];
int front;
int rear;
int cnt;

/*---------------------------------------------------------------
Function Name	: initGraph() - �׷��� ���� ����ü �ʱ�ȭ �Լ�
Argument		: gp - �׷��� ���� ����ü ������
Return			: ��������Ʈ ���� ���� �� TRUE / ���� �� FALSE
---------------------------------------------------------------*/
bool_t initGraph(graph_t *gp) {
	int i;
	char s;
	char e;

	// TODO
}

/*---------------------------------------------------------------
Function Name : addNode() - �׷��� ���� ����ü �ʱ�ȭ �Լ�
Argument	: gp - �׷��� ���� ����ü ������
				v1 - ������ �����ϴ� ù ��° ���� ��ȣ
				v2 - ������ �����ϴ� �� ��° ���� ��ȣ
Return		: ��� ���� �� �߰� ���� �� TRUE / ���� �� FALSE
---------------------------------------------------------------*/
bool_t addNode(graph_t *gp, int v1, int v2) {
	node_t *n1;
	node_t *n2;
	
	// TODO
	
}

/*---------------------------------------------------------------
Function Name 	: outputGraph() - �׷��� ��� �Լ�
Argument		: gp - �׷��� ���� ����ü ������
Return			: ����
---------------------------------------------------------------*/
void outputGraph(graph_t *gp) {
	int i;
	node_t *cur;

	// TODO
}


/*---------------------------------------------------------------
Function Name 	: destroyGraph() - �׷��� ���� ����ü ���� �����Ҵ� ���� �� �ʱ�ȭ �Լ�
Argument		: gp - �׷��� ���� ����ü ������
Return			: ����
---------------------------------------------------------------*/
void destroyGraph(graph_t *gp) {
	int i;
	node_t *delNode;

	// TODO
}

/*---------------------------------------------------------------
Function Name 	: startBFS() - �湮���� ���� ������ Ȯ���ϰ� �ʺ�켱Ž���� �����ϴ� �Լ�
Argument		: gp - �׷��� ���� ����ü ������
Return			: ����
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
Function Name	: BFS() - �ʺ�켱Ž�� ���� �Լ�
Argument		: gp - �׷��� ���� ����ü ������ / s - �������
Return			: ����
---------------------------------------------------------------*/
void BFS(graph_t *gp, int s) {
	int v;
	node_t *cur;
	
	// TODO
	
}
