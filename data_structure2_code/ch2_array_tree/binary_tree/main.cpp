#include <stdio.h>
#include "tree.h"

int main(void) {
    //int vertex, edge;
    int vertex;
    int edge;

    freopen("data.txt", "r", stdin);

//    scanf("%d %d", &vertex, &edge);
//    printf("%d %d\n", (int)vertex, (int)edge);

    createTree();
    printf("Node visit test : ");
    TR(1);
    printf("\n");
    printf("number of visited nodes : %d\n", cnt);
    printf("ancester of 5 : ");
    FND(5);
    printf("\n");

    return 0;
}
