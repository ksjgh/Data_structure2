#include <stdio.h>
#include "Graph.h"

int main(void) {
	graph_t grp;

	freopen("data.txt", "r", stdin);

	initGraph(&grp);

	printf("--------------------------------------\n");
	printf("              ��������Ʈ\n");
	printf("--------------------------------------\n");
	outputGraph(&grp);

	printf("--------------------------------------\n");
	printf("        ��������Ʈ BFS �湮\n");
	printf("--------------------------------------\n");
	startBFS(&grp);
	printf("--------------------------------------\n");
	destroyGraph(&grp);
	printf("��ü �׷����� �� : %d\n", cnt);

	return 0;
}
