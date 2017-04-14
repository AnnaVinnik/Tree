#include <stdio.h>
#include <stdlib.h>
#include "bstree.h"

struct bstree *bstree_create(char *key, int value){
	struct bstree *temp = malloc(sizeof(struct bstree));
	if (temp == NULL) return NULL;
	temp->key = key;
	temp->value = value;

return temp;
}
