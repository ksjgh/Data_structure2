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
//Node *addNode(Tree *tp, int data)
//{
//    Node *cur;		/* 말단 노드 저장 포인터 변수 */
//    Node *parent;		/* 부모 노드 저장 포인터 변수 */

//    // TODO

//    return NULL; // 리턴값은 수정해주세요.
//}

//// my solution
//Node *addNode(Tree *tp, int data)
//{
//    Node *cur;		/* 말단 노드 저장 포인터 변수 */
//    Node *parent;		/* 부모 노드 저장 포인터 변수 */

//    // TODO
//    Node* node = makeNode(data,NULL,NULL);
//    if(node==NULL){
//        return NULL;
//    }

//    if(tp->root==NULL){
//        tp->root = node;
//    }
//    else{
//        cur = tp->root;
//        while(true){
//            parent = cur;
//            if(node->data < cur->data){
//                cur = cur->left;
//                if(cur==NULL){
//                    parent->left = node;
//                    break;
//                }
//            }
//            else{
//                cur = cur->right;
//                if(cur==NULL){
//                    parent->right = node;
//                    break;
//                }
//            }
//        }
//    }
//    tp->nodeCnt++;
//    return node; // 리턴값은 수정해주세요.
//}

// ref solution
Node *addNode(Tree *tp, int data)
{
    Node *cur;		/* 말단 노드 저장 포인터 변수 */
    Node *parent;		/* 부모 노드 저장 포인터 변수 */

    // TODO
    Node* node = makeNode(data,NULL,NULL);
    if(node==NULL){
        return NULL;
    }

    if(tp->root==NULL){
        tp->root = node;
    }
    else{
        cur = tp->root;
        while(cur!=NULL){
            parent = cur;
            if(node->data < cur->data){
                cur = cur->left;
            }
            else{
                cur = cur->right;
            }
        }

        if(node->data < parent->data){
            parent->left = node;
        }
        else{
            parent->right = node;
        }
    }
    tp->nodeCnt++;
    return node; // 리턴값은 수정해주세요.
}




/* --------------------------------------------------------------------------------------
Function name 	: inorderTraverse - 중위순회(정렬 순서로 출력)
Parameters		: np - 방문할 노드의 주소
Returns 		: 없음
---------------------------------------------------------------------------------------*/
//void inorderTraverse(Node *np)
//{
//    // TODO
//}

// my sol
//void inorderTraverse(Node *np)
//{
//    // TODO
//    if(np==NULL){
//        return;
//    }

//    // visit left subtree
//    inorderTraverse(np->left);

//    // print this node data
//    printf("%d\t",np->data);

//    // visit right subtree
//    inorderTraverse(np->right);
//}

// ref sol
void inorderTraverse(Node *np)
{
    // TODO
    if(np != NULL){
        inorderTraverse(np->left);
        printf("%4d",np->data);
        inorderTraverse(np->right);
    }

}


/* --------------------------------------------------------------------------------------
Function name 	: preorderTraverse - 전위순회
Parameters		: np - 방문할 노드의 주소
Returns 		: 없음
---------------------------------------------------------------------------------------*/
//void preorderTraverse(Node *np)
//{
//    // TODO
//}

// my sol
//void preorderTraverse(Node *np)
//{
//    // TODO

//    if(np==NULL){
//        return;
//    }

//    // print current node
//    printf("%d\t",np->data);

//    // visit left subtree
//    preorderTraverse(np->left);

//    // visit right subtree
//    preorderTraverse(np->right)
//}

// ref sol
void preorderTraverse(Node *np)
{
    // TODO
    if(np != NULL){
        printf("%4d",np->data);
        preorderTraverse(np->left);
        preorderTraverse(np->right);
    }
}


/* --------------------------------------------------------------------------------------
Function name 	: postorderTraverse - 후위순회
Parameters		: np - 방문할 노드의 주소
Returns 		: 없음
---------------------------------------------------------------------------------------*/
//void postorderTraverse(Node *np)
//{
//    // TODO
//}

//void postorderTraverse(Node *np)
//{
//    // TODO
//    if(np==NULL){
//        return;
//    }

//    // visit left subtree
//    postorderTraverse(np->left);

//    // visit right subtree
//    postorderTraverse(np->right);

//    // print current node
//    printf("%d\n",np->data);
//}

// ref sol
void postorderTraverse(Node *np)
{
    // TODO
    if(np != NULL){
        postorderTraverse(np->left);
        postorderTraverse(np->right);
        printf("%4d",np->data);
    }

}


/* --------------------------------------------------------------------------------------
Function name 	: searchNode - data에 해당하는 노드 검색
Parameters		: tp - Tree 구조체의 주소
           data - 검색할 데이터
Returns 		: 찾은 노드의 주소 / 못찾으면 NULL pointer
---------------------------------------------------------------------------------------*/
//Node * searchNode(Tree *tp, int data)
//{
//    Node *node;

//    // TODO

//    return NULL; // 리턴값은 수정해주세요.
//}

//// my sol
//Node * searchNode(Tree *tp, int data)
//{
//    // TODO
//    Node* curp = tp->root;

//    while(curp != NULL ){
//        if(curp->data == data){
//            return curp;
//        }
//        else if( data < curp->data ){
//            curp = curp->left;
//        }
//        else {
//            curp = curp->right;
//        }
//    }

//    return NULL; // 리턴값은 수정해주세요.
//}

// ref sol
Node * searchNode(Tree *tp, int data)
{
    Node *node;

    // TODO
    node = tp->root;
    while( (node != NULL) && (node->data != data)){
        if( data < node->data ){
            node = node->left;
        }
        else{
            node = node->right;
        }
    }

    return node; // 리턴값은 수정해주세요.
}

/* --------------------------------------------------------------------------------------
Function name 	: deleteNode - data에 해당하는 노드 삭제
Parameters		: tp - Tree 구조체의 주소
                  data - 삭제할 데이터
Returns 		: 삭제한 노드의 주소 / 못찾으면(삭제 실패 시) NULL pointer
---------------------------------------------------------------------------------------*/
//Node * deleteNode(Tree *tp,int data)
//{
//    Node *parent;  // 삭제할 노드의 부모노드
//    Node *son;     // 삭제할 노드대신 자식노릇을 할 노드의 주소 저장
//    Node *del;     // 삭제할 노드

//        // TODO

//        return NULL;
//}

//// my sol
//Node * deleteNode(Tree *tp,int data)
//{
//    Node *parent;  // 삭제할 노드의 부모노드
//    Node *son;     // 삭제할 노드대신 자식노릇을 할 노드의 주소 저장
//    Node *del;     // 삭제할 노드

//    // TODO
//    del = searchNode( tp, data );
//    if( del != NULL){
//        if( del == tp->root ){
//            ;
//        }
//        else{
//            ;
//        }
//    }

//    return del;
//}

// ref sol
Node * deleteNode(Tree *tp,int data)
{
    Node *parent;  // 삭제할 노드의 부모노드
    Node *son;     // 삭제할 노드대신 자식노릇을 할 노드의 주소 저장
    Node *del;     // 삭제할 노드

    // TODO
    parent = del = tp->root;
    while( del != NULL ){
        if( data == del->data ){
            break;
        }

        parent = del;
        if( data < del->data ){
            del = del->left;
        }
        else{
            del = del->right;
        }
    }
    if(del == NULL) return NULL;

    // type1 , 삭제할 노드 오른쪽 자식이 없는 경우
    if(del->right==NULL){
        son = del->left;
    }
    // type2 , 삭제한 노드의 오른족 자식의 왼쪽 자식이 없는 경우
    else if( del->right->left==NULL){
        son = del->right;
        son->left = del->left;
    }

    // type3 , 그 외의 모든 경우
    if(del==tp->root){
        tp->root = son;
    }
    else if(son->data < parent->data){
        parent->left = son;
    }
    else{
        parent->right = son;
    }

    if( del != NULL ){
        free(del);
        --tp->nodeCnt;
        retturn del;
    }
    else
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
