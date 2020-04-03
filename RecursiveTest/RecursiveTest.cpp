#include "pch.h"
#include <iostream>

struct Data
{
	char text;
};

void arrayTest()
{
	Data* array;
	int arrrayCount = 5;

	{
		array = (Data*)malloc(sizeof(Data) * arrrayCount);
		array[0].text = '@';
		array[1].text = ' ';
		array[2].text = ' ';
		array[3].text = ' ';
		array[4].text = '@';
	}

	//textに@が入っているものを数えてください。

	//メモリ解放はこうやるよ
	free(array);
}

struct Tree
{
	char text;
	int childrenCount;
	Tree* children;
};

void treeTest()
{
	Tree* root;

	//テストデータ作成 これは見てない体で
	{
		Tree* node0;
		Tree* node1;
		Tree* node2;
		Tree* node1_1;

		root = (Tree*)malloc(sizeof(Tree));
		root->text = '@';
		root->childrenCount = 3;
		root->children = (Tree*)malloc(sizeof(Tree) * root->childrenCount);

		node0 = &root->children[0];
		node0->text = ' ';
		node0->childrenCount = 0;
		node0->children = nullptr;

		node1 = &root->children[1];
		node1->text = ' ';
		node1->childrenCount = 1;
		node1->children = (Tree*)malloc(sizeof(Tree) * node1->childrenCount);

		node2 = &root->children[2];
		node2->text = '@';
		node2->childrenCount = 0;
		node2->children = nullptr;

		node1_1 = &node1->children[0];
		node1_1->text = '@';
		node1_1->childrenCount = 0;
		node1_1->children = nullptr;
	}

	//textに@が入っている数を数えてください。


	//メモリリークが起きないようにしてください。
}


int main()
{
	arrayTest();
	return 0;
}
