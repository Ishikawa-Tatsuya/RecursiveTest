#include "pch.h"
#include <iostream>

#define TEXT_BUF_LENGTH (sizeof(char) * 128)

struct Tree
{
	char* text;
	int childrenCount;
	Tree* children;
};

int main()
{
	Tree* root;

	//テストデータ作成 これは見てない体で
	{
		Tree* node0;
		Tree* node1;
		Tree* node2;
		Tree* node1_1;

		root = (Tree*)malloc(sizeof(Tree));
		root->text = (char*)malloc(TEXT_BUF_LENGTH);
		strncpy_s(root->text, TEXT_BUF_LENGTH, "★", TEXT_BUF_LENGTH);
		root->childrenCount = 3;
		root->children = (Tree*)malloc(sizeof(Tree) * root->childrenCount);

		node0 = &root->children[0];
		node0->text = (char*)malloc(TEXT_BUF_LENGTH);
		strncpy_s(node0->text, TEXT_BUF_LENGTH, "☆", TEXT_BUF_LENGTH);
		node0->childrenCount = 0;
		node0->children = nullptr;

		node1 = &root->children[1];
		node1->text = (char*)malloc(TEXT_BUF_LENGTH);
		strncpy_s(node1->text, TEXT_BUF_LENGTH, "☆", TEXT_BUF_LENGTH);
		node1->childrenCount = 1;
		node1->children = (Tree*)malloc(sizeof(Tree) * node1->childrenCount);

		node2 = &root->children[2];
		node2->text = (char*)malloc(TEXT_BUF_LENGTH);
		strncpy_s(node2->text, TEXT_BUF_LENGTH, "★", TEXT_BUF_LENGTH);
		node2->childrenCount = 0;
		node2->children = nullptr;

		node1_1 = &node1->children[0];
		node1_1->text = (char*)malloc(TEXT_BUF_LENGTH);
		strncpy_s(node1_1->text, TEXT_BUF_LENGTH, "★", TEXT_BUF_LENGTH);
		node1_1->childrenCount = 0;
		node1_1->children = nullptr;
	}

	//textに★が入っている数を数えてください。


	//メモリリークが起きないようにしてください。
}

