#include <stdio.h>
#include "adjList.h"
#include "stackL.h"
#include "DFS.h"

// �׷��� g���� ���� v�� ���� ���� �켱 Ž�� ����
void DFS_adjList(graphType* g, int v) {
	graphNode* w;			// ������ top ����
	top = NULL;				// ���� �켱 Ž���� �����ϴ� ���� v�� ���ÿ� push
	push(v);				// ���� v�� �湮�����Ƿ� �ش� �迭���� TRUE�� ����
	g->visited[v] = TRUE;
	printf(" %c", v + 65);

	// ������ ������ �ƴ� ���� ���� �켱 Ž�� �ݺ�
	while (!isStackEmpty()) {
		w = g->adjList_H[v];
		// ���� ������ �ִ� ���� ����
		while (w) {
			// ���� ���� w�� �湮���� ���� ���
			if (!g->visited[w->vertex]) {
				push(w->vertex);					// ���� ���� W�� ���ÿ� push
				g->visited[w->vertex] = TRUE;		// ���� w�� ���� �迭���� TRUE�� ����
				printf(" %c", w->vertex + 65);		// ���� 0~6�� A~G�� �ٲپ ���
				v = w->vertex;
				w = g->adjList_H[v];
			}
			// ���� ���� w�� �̹� �湮�� ���
			else w = w->link;
		}
		v = pop();		// ���� �������� ��ȸ�� ������ ���� ������ �� ���� ��쿡 ���� pop!
	}		// ������ �����̸� ���� �켱 Ž�� ����
}		