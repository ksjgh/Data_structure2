#ifndef TREE_H_
#define TREE_H_
#define MAX 10			/* �ִ� ��� �� */

extern int PN[];		/* �θ� ��� ���� ���� �迭 */
extern int CL[];		/* ���� �ڽ� ���� ���� �迭 */
extern int CR[];		/* ���� �ڽ� ���� ���� �迭 */
extern int cnt;			/* ��ȸ �� �湮 ��� ī���� ���� */

void createTree(void);	/* Ʈ�� ���� �Լ� */
void TR(int n);		/* Ʈ�� ��ȸ ��� �Լ� */
void FND(int n);		/* ���� ��� Ž�� �Լ� */

#endif /* TREE_H_ */
