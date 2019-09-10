#ifndef GRAPH_H_
#define GRAPH_H_

#define MAX 100

extern int grp[MAX][MAX];	/* ������� */
extern int vertex;			/* ��� �� */
extern int edge;			/* ���� �� */
extern int visited[MAX];	/* ��� �湮 üũ �迭 */
extern int stack[MAX];		/* ���� �迭 */
extern int top;				/* ���� ������ */
extern int cnt;				/* �׷��� �� ī���� ���� */

void printGraph(void);		/* ������� ��� �Լ� */
void createGraph(void);		/* ������� ���� �Լ� */
void startDFS(void);		/* DFS�˻� �����Լ� */
void DFS(int u);			/* DFS�˻� �ݺ������� ������ �� */
void reDFS(int u);          /* DFS�˻� ����Լ� */
#endif /* GRAPH_H_ */
