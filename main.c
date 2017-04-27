#include <stdio.h>
#include "bstree.h"
#include <locale.h>

int main(){
char k[5000][30], b;
int i;


FILE *f, *f2;
    f = fopen("text.txt", "r");
f2 = fopen("text2.txt", "a");

    for (i = 0; i < 5000; i++){
    fscanf(f, "%s", k[i]);
    }

    struct bstree *tree = bstree_create("k[0]", 0);
    
    for (i = 0; i < 5000; i++)
    bstree_add(tree, k[i], i);


    struct bstree *temp = bstree_lookup(tree, k[120]);
    printf("%s %s \n", temp->key, k[120]);
 

fclose (f);
fclose (f2);

return 0;
}
