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

	// ���� ��ȸ�� �̿��� ���ĵ� ���·� ����ϱ�
	printf("* ������ȸ ��� : ");
	inorderTraverse(mytree.root);  // ���� ù��° �����ͳ���� �ּ� ����
	printf("\n\n");

	// ���� ��ȸ �̿� ����ϱ�
	printf("* ������ȸ ��� : ");
	preorderTraverse(mytree.root); // ���� ù��° �����ͳ���� �ּ� ����
	printf("\n\n");
	// ���� ��ȸ �̿� ����ϱ�
	printf("* ������ȸ ��� : ");
	postorderTraverse(mytree.root); // ���� ù��° �����ͳ���� �ּ� ����
	printf("\n\n");

//	// ��� �˻�
//	searchData = 3;
//	resp = searchNode(&mytree, searchData);
//	if (resp != NULL) printf("%d ã��!!\n\n", resp->data);
//	else printf("%d ��ã��!!\n\n", searchData);

//	searchData = 99;
//	resp = searchNode(&mytree, searchData);
//	if (resp != NULL) printf("%d ã��!!\n\n", resp->data);
//	else printf("%d ��ã��!!\n\n", searchData);

//	searchData = 19;
//	resp = searchNode(&mytree, searchData);
//	if (resp != NULL) printf("%d ã��!!\n\n", resp->data);
//	else printf("%d ��ã��!!\n\n", searchData);

//	searchData = 23;
//	resp = searchNode(&mytree, searchData);
//	if (resp != NULL) printf("%d ã��!!\n\n", resp->data);
//	else printf("%d ��ã��!!\n\n", searchData);

//	// ��� ����
//	printf("Node ����...\n");
//	deleteData = 7;
//	resp=deleteNode(&mytree, deleteData); // ����1 : ������ ����� ������ �ڽ��� ���� ���
//	if (resp != NULL)
//		printf("%d ��������!\n", deleteData);
//	else
//		printf("%d ���� ����!!\n", deleteData);

//	deleteData = 18;
//	resp = deleteNode(&mytree, deleteData); // ����2 : ������ ����� ������ �ڽ��� ���� �ڽ��� ���� ���
//	if (resp != NULL)
//		printf("%d ��������!\n", deleteData);
//	else
//		printf("%d ���� ����!!\n", deleteData);

//	deleteData = 123;
//	resp = deleteNode(&mytree, deleteData); // ����3 : �׿� ��� ���
//	if (resp != NULL)
//		printf("%d ��������!\n", deleteData);
//	else
//		printf("%d ���� ����!!\n", deleteData);

//	deleteData = 14;
//	resp = deleteNode(&mytree, deleteData); // ����3 : �׿� ��� ���
//	if (resp != NULL)
//		printf("%d ��������!\n", deleteData);
//	else
//		printf("%d ���� ����!!\n", deleteData);

//	printf("\n�������� tree���� �ڷ� ��� : ");
//	inorderTraverse(mytree.root);
//	printf("\n\n");
	
//	// tree �Ҹ� (��ü ��� ����)
//	printf("tree ��ü ��� ����(tree �Ҹ�...)\n");
//	destroyTree(&mytree);
	
	return 0;
}
