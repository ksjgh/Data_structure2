#include <stdio.h>
#include "tree.h"
int main()
{
	int ary[] = { 14, 25, 12, 18, 16, 15, 5, 23, 7, 17, 3, 13, 6 };
	int arySize = sizeof(ary) / sizeof(ary[0]);
	Tree  mytree;
	Node *resp;
	int searchData;
	int deleteData;
	int i;

	initTree(&mytree);
	for (i = 0; i < arySize; i++)
	{
		if(addNode(&mytree, ary[i]) == NULL){
			printf("add fail!!\n");
		}
	}

	// 중위 순회를 이용한 정렬된 상태로 출력하기
	printf("* 중위순회 결과 : ");
	inorderTraverse(mytree.root);  // 실제 첫번째 데이터노드의 주소 전달
	printf("\n\n");

	// 전위 순회 이용 출력하기
	printf("* 전위순회 결과 : ");
	preorderTraverse(mytree.root); // 실제 첫번째 데이터노드의 주소 전달
	printf("\n\n");
	// 후위 순회 이용 출력하기
	printf("* 후위순회 결과 : ");
	postorderTraverse(mytree.root); // 실제 첫번째 데이터노드의 주소 전달
	printf("\n\n");

//	// 노드 검색
//	searchData = 3;
//	resp = searchNode(&mytree, searchData);
//	if (resp != NULL) printf("%d 찾음!!\n\n", resp->data);
//	else printf("%d 못찾음!!\n\n", searchData);

//	searchData = 99;
//	resp = searchNode(&mytree, searchData);
//	if (resp != NULL) printf("%d 찾음!!\n\n", resp->data);
//	else printf("%d 못찾음!!\n\n", searchData);

//	searchData = 19;
//	resp = searchNode(&mytree, searchData);
//	if (resp != NULL) printf("%d 찾음!!\n\n", resp->data);
//	else printf("%d 못찾음!!\n\n", searchData);

//	searchData = 23;
//	resp = searchNode(&mytree, searchData);
//	if (resp != NULL) printf("%d 찾음!!\n\n", resp->data);
//	else printf("%d 못찾음!!\n\n", searchData);

//	// 노드 삭제
//	printf("Node 삭제...\n");
//	deleteData = 7;
//	resp=deleteNode(&mytree, deleteData); // 유형1 : 삭제할 노드의 오른쪽 자식이 없는 경우
//	if (resp != NULL)
//		printf("%d 삭제성공!\n", deleteData);
//	else
//		printf("%d 삭제 실패!!\n", deleteData);

//	deleteData = 18;
//	resp = deleteNode(&mytree, deleteData); // 유형2 : 삭제할 노드의 오른쪽 자식의 왼쪽 자식이 없는 경우
//	if (resp != NULL)
//		printf("%d 삭제성공!\n", deleteData);
//	else
//		printf("%d 삭제 실패!!\n", deleteData);

//	deleteData = 123;
//	resp = deleteNode(&mytree, deleteData); // 유형3 : 그외 모든 경우
//	if (resp != NULL)
//		printf("%d 삭제성공!\n", deleteData);
//	else
//		printf("%d 삭제 실패!!\n", deleteData);

//	deleteData = 14;
//	resp = deleteNode(&mytree, deleteData); // 유형3 : 그외 모든 경우
//	if (resp != NULL)
//		printf("%d 삭제성공!\n", deleteData);
//	else
//		printf("%d 삭제 실패!!\n", deleteData);

//	printf("\n삭제후의 tree내의 자료 출력 : ");
//	inorderTraverse(mytree.root);
//	printf("\n\n");
	
//	// tree 소멸 (전체 모드 삭제)
//	printf("tree 전체 노드 삭제(tree 소멸...)\n");
//	destroyTree(&mytree);
	
	return 0;
}
