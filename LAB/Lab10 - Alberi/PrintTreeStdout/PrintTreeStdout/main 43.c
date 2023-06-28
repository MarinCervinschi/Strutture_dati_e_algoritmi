#include "elemtype.h"
#include "tree.h"
#include <stdlib.h>
extern void PrintTreeStdout(const Node *t);
int main(void) {
    ElemType e[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 ,9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 77 };
    
    Node *ret = TreeCreateRoot(e + 12,
                                   TreeCreateRoot(e + 4,
                                    TreeCreateRoot(e + 0,
                                     TreeCreateRoot(e + 22, NULL, NULL),
                                     TreeCreateRoot(e + 8, NULL, NULL)),
                                    TreeCreateRoot(e + 2,
                                     TreeCreateRoot(e + 9, NULL, NULL), NULL)),
                                   TreeCreateRoot(e + 21,
                                    TreeCreateRoot(e + 5, NULL, NULL),
                                    TreeCreateRoot(e + 18, NULL, NULL)));
    

    
    PrintTreeStdout(ret);
    return 0;
}


