#include <stdio.h>
#include "bstree.h"

int main(){
  char *k = "k", *a = "a", *b = "b", *c = "c", *d = "d", *e = "e", *i = "i", *f = "f", *g = "g", *h = "h", *l = "l";

struct bstree *temp = bstree_create(k, 10);
bstree_add(temp, b, 20);
bstree_add(temp, c, 15);
bstree_add(temp, d, 7);
bstree_add(temp, e, 3);
bstree_add(temp, a, 30);
bstree_add(temp, i, 25);
bstree_add(temp, f, 40);
bstree_add(temp, g, 14);
bstree_add(temp, h, 16);

 struct bstree *rezult = bstree_lookup(temp, f);
printf("%d \n", rezult->value);

return 0;
}
