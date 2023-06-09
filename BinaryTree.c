#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct TreeNode {
	int data;
	struct TreeNode* left;
	struct TreeNode* right;
}TreeNode;


TreeNode* createNode(int data) {
	TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}


//没有规律的树
void insertNode(TreeNode* parent, TreeNode* left, TreeNode* right){
	parent->left = left;
	parent->right = right;
}


void printNode(TreeNode* node) {
	printf("%d\t", node->data);
}


//前序
void preOrder(TreeNode* root) {
	if (root != NULL) {
		printNode(root);
		preOrder(root->left);
		preOrder(root->right);
	}
}


//前序非递归
void


//中序
void midOrder(TreeNode* root) {
	if (root != NULL) {
		midOrder(root->left);
		printNode(root);
		midOrder(root->right);

	}
}


//后序
void postOrder(TreeNode* root) {
	if (root != NULL) {
		postOrder(root->left);
		postOrder(root->right);
		printNode(root);
	}
}


int main() {
	TreeNode* A = createNode(1);
	TreeNode* B = createNode(2);
	TreeNode* C = createNode(3);
	TreeNode* D = createNode(4);
	TreeNode* E = createNode(5);
	TreeNode* F = createNode(6);
	TreeNode* G = createNode(7);
	insertNode(A, B, C);
	insertNode(B, D, NULL);
	insertNode(D, NULL, G);
	insertNode(C, E, F);
	preOrder(A);
	return 0;
}

