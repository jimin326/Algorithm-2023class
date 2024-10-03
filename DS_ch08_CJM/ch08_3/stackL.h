#pragma once
typedef int element;		// ���� ����(element)�� �ڷ����� int�� ����

typedef struct stackNode {
	element data;			// ������ ��带 ����ü�� ����
	struct stackNode* link;
} stackNode;

stackNode* top;				// ������ top��带 �����ϱ� ���� ������ top ����

int isStackEmpty();
void push(element item);
element pop();
element peek();
void printStack();