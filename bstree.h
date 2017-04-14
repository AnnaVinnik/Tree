#ifndef BSTREE_H
#define BSTREE_H

struct bstree{
	int value;
	char *key;
	struct node *parent;
	struct node *right;
	struct node *left;
};

struct bstree *bstree_create(char *key, int value);

#endif
