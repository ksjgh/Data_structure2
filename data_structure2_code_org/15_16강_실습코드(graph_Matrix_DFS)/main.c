#include <stdio.h>
#include "Graph.h"

int main(void) 
{	
	freopen("data.txt", "r", stdin);
	
	createGraph();
	printf("--------------------------------------\n");
	printf("              ��������Ʈ\n");
	printf("--------------------------------------\n");
	printGraph();
	printf("--------------------------------------\n");
	printf("        ������� DFS �湮\n");
	printf("--------------------------------------\n");
	startDFS();
	printf("--------------------------------------\n");
	printf("��ü �׷����� �� : %d\n", cnt);
	
	return 0;
}

