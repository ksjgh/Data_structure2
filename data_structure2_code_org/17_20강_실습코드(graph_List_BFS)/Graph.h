#ifndef GRAPH_H_
#define GRAPH_H_

#define MAX_VERTEX 100
typedef enum _bool { false = 0, true = 1, FALSE = false, TRUE = true } bool_t;

typedef struct _node {	/* ���� ���� ���� ��� ����ü */
	int vertex;			/* ���� ��ȣ */
	struct _node *next;	/* ���� ��� �ּ� */
} node_t;

typedef struct {		/* �׷��� ���� ����ü */
	node_t *graph[MAX_VERTEX];	/* ������Ʈ�� ǥ��迭 */
	int vertexCnt;				/* ���� ���� �� */
	int edgeCnt;				/* ���� �� */
} graph_t;

extern int visited[];	/* ���� �湮 üũ �迭 */
extern int queue[];		/* ���� ���� ť */
extern int front;		/* ť ��� ���� ���� */
extern int rear;		/* ť �Է� ���� ���� */
extern int cnt;			/* �׷��� �� ī���� ���� */

bool_t initGraph(graph_t *gp);	/* �׷��� �ʱ�ȭ �� ���� �Լ� */
void outputGraph(graph_t *gp);	/* �׷��� ��� �Լ� */
bool_t addNode(graph_t *gp, int v1, int v2); /* ������� ���� �� �߰� �Լ� */
void destroyGraph(graph_t *gp);	/* �׷������� ��� ���� �� �ʱ�ȭ �Լ� */
void startBFS(graph_t *gp); 	/* �湮���� ���� ��忡 ���� BFSŽ�� ȣ�� �Լ� */
void BFS(graph_t *gp, int s);	/* BFSŽ�� �Լ� */

#endif /* GRAPH_H_ */
