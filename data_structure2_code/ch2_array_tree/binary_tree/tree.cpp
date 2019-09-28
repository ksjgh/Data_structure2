#include <stdio.h>
#include "tree.h"

int PN[MAX + 1];	/* 부모 노드 정보 저장 배열 */
int CL[MAX + 1];	/* 좌측 자식 정보 저장 배열 */
int CR[MAX + 1];	/* 우측 자식 정보 저장 배열 */
int cnt;

/*----------------------------------------------------------------------
Function Name 	: createTree() - 이진트리 구성함수
인수 			: 없음
반환값 			: 없음
----------------------------------------------------------------------*/
//// template
//void createTree(void)
//{
//    int vertex;
//    int edge;
//    int i;

//    // TODO
//}

// ref solution
void createTree(void)
{
    int vertex;
    int edge;
    int i;

    // TODO
    scanf("%d %d", &vertex, &edge);
//    printf("%d %d \n",vertex,edge);

    for(i=1; i<=edge ; i++){
        int p,c;
        scanf("%d %d", &p, &c);

        if(CL[p]==0){
            CL[p]=c;
        }
        else{
            CR[p]=c;
        }

        PN[c] = p;
    }
    printf("Tree is created\n");

}


/*--------------------------------------------------------------
Function Name 	: TR() - 이진트리 순회 함수
인수 			: n - 순회 노드 번호
반환값 			: 없음
--------------------------------------------------------------*/
//// template
//void TR(int n)
//{
//    // TODO
//}

// my solution
void TR(int n)
{
    // TODO
    if(n==0){
        return;
    }

    ++cnt;
    printf("%d\t",n);
    TR(CL[n]);
    TR(CR[n]);
}

/*-------------------------------------------------------------
Function Name 	: FND() - 조상노드 검색 함수
인수 			: n - 조상노드를 검색할 대상노드
반환값 			: 없음
-------------------------------------------------------------*/
void FND(int n)
{
    // TODO
    int c = n;
    while(PN[c] != 0){
        c = PN[c];
        printf("%d ", c);
    }
}
