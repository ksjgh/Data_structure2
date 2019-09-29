#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

/* -------------------------------------------------------------------------------------
Function name 	: initTree - 트리 관리 구조체를 초기화 하는 함수
Parameters		: tp - Tree 구조체의 주소
Returns 		: 없음
--------------------------------------------------------------------------------------*/
void initTree(Tree *tp)
{
    tp->root = NULL;
    tp->nodeCnt = 0;
}
/* --------------------------------------------------------------------------------------
Function name 	: makeNode - 새 노드를 만들어 새 노드의 주소를 리턴하는 함수
Parameters		: data - 새 노드에 저장될 값(데이터)
                left - 새 노드의 left 멤버 값
                right - 새 노드의 right 멤버 값
Returns 		: 새 노드의 주소 / 메모리 할당 실패 시 NULL pointer
---------------------------------------------------------------------------------------*/
Node * makeNode(int data, Node * left, Node *right)
{
    Node *np;
    np = (Node *)malloc(sizeof(Node));
    if (np != NULL) {
        np->data = data;
        np->left = left;
        np->right = right;
    }
    return np;
}

/* --------------------------------------------------------------------------------------
Function name 	: addNode - 노드를 삽입하는 함수
Parameters		: tp - Tree 구조체의 주소
                data - 새 노드에 저장될 데이터 저장 공간의 주소
Returns 		: 새 노드의 주소 / 메모리 할당 실패 시 NULL pointer
---------------------------------------------------------------------------------------*/
Node *addNode(Tree *tp, int data)
{
    Node *cur;		/* 말단 노드 저장 포인터 변수 */
    Node *parent;		/* 부모 노드 저장 포인터 변수 */

    // TODO

    return NULL; // 리턴값은 수정해주세요.
}
/* --------------------------------------------------------------------------------------
Function name 	: inorderTraverse - 중위순회(정렬 순서로 출력)
Parameters		: np - 방문할 노드의 주소
Returns 		: 없음
---------------------------------------------------------------------------------------*/
void inorderTraverse(Node *np)
{
    // TODO
}

/* --------------------------------------------------------------------------------------
Function name 	: preorderTraverse - 전위순회
Parameters		: np - 방문할 노드의 주소
Returns 		: 없음
---------------------------------------------------------------------------------------*/
void preorderTraverse(Node *np)
{
    // TODO
}
/* --------------------------------------------------------------------------------------
Function name 	: postorderTraverse - 후위순회
Parameters		: np - 방문할 노드의 주소
Returns 		: 없음
---------------------------------------------------------------------------------------*/
void postorderTraverse(Node *np)
{
    // TODO
}
/* --------------------------------------------------------------------------------------
Function name 	: searchNode - data에 해당하는 노드 검색
Parameters		: tp - Tree 구조체의 주소
           data - 검색할 데이터
Returns 		: 찾은 노드의 주소 / 못찾으면 NULL pointer
---------------------------------------------------------------------------------------*/
Node * searchNode(Tree *tp, int data)
{
    Node *node;

    // TODO

    return NULL; // 리턴값은 수정해주세요.
}
/* --------------------------------------------------------------------------------------
Function name 	: deleteNode - data에 해당하는 노드 삭제
Parameters		: tp - Tree 구조체의 주소
                  data - 삭제할 데이터
Returns 		: 삭제한 노드의 주소 / 못찾으면(삭제 실패 시) NULL pointer
---------------------------------------------------------------------------------------*/
Node * deleteNode(Tree *tp,int data)
{
    Node *parent;  // 삭제할 노드의 부모노드
    Node *son;     // 삭제할 노드대신 자식노릇을 할 노드의 주소 저장
    Node *del;     // 삭제할 노드

        // TODO

        return NULL;
}

/* --------------------------------------------------------------------------------------
Function name 	: destroyTree - tree 내의 모든 노드 삭제(tree 소멸)
Parameters		: tp - tpee 구조체의 주소
Returns 		: 없음
---------------------------------------------------------------------------------------*/
void destroyTree(Tree * tp)
{
    postorderDelete(tp->root);  // 데이터 노드는 순회 하며 삭제
    tp->root = NULL;
    tp->nodeCnt = 0;
}

/* --------------------------------------------------------------------------------------
Function name 	: postorderDelete - postorder(후위 순회)방식의 노드 삭제(재귀호출 함수)
Parameters		: np - 방문할 노드의 주소
Returns 		: 없음
---------------------------------------------------------------------------------------*/
void postorderDelete(Node *np)
{
    // TODO

}
