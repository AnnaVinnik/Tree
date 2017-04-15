#include <stdio.h>
#include "bstree.h"

int main(){
char *k = "k", *a = "a", *b = "b", *c = "c", *d = "d", *e = "e", *i = "i", *f = "f", *l = "l", *m = "m", *o = "o";

struct bstree *temp = bstree_create(k, 10);
bstree_add(temp, b, 20);
bstree_add(temp, c, 15);
bstree_add(temp, d, 7);
bstree_add(temp, e, 3);
bstree_add(temp, a, 30);
bstree_add(temp, i, 25);
bstree_add(temp, f, 40);
bstree_add(temp, l, 8);
bstree_add(temp, m, 9);
bstree_add(temp, o, 2);

struct bstree *min = bstree_min(temp);
printf("min: %d %s \n", min->value, min->key);

struct bstree *max = bstree_max(temp);
printf("max: %d %s \n", max->value, max->key);

struct bstree *rezult = bstree_lookup(temp, e);
printf("%d \n", rezult->value);

//printf("10: %d \n", temp->value);
//printf("20: %d \n", temp->right->value);
//printf("15: %d \n", temp->right->left->value);
//printf("30: %d \n", temp->right->right->value);
//printf("25: %d \n", temp->right->right->left->value);
//printf("40: %d \n", temp->right->right->right->value);
//printf("7: %d \n", temp->left->value);
//printf("3: %d \n", temp->left->left->value);


return 0;
}
