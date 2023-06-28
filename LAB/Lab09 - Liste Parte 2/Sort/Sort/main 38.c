#include <stdio.h>
#include "elemtype.h"
#include "list.h"

extern Item *Sort(Item *i);

int main(void) {
    
    ElemType e1 = {
        .name = "3",
        .street = "Via Rieti",
        .number = 3,
        .city = "Modena",
        .province = "MO",
        .postal_code = "41125"
    };
    ElemType e2 = {
        .name = "4",
        .street = "Via Pio",
        .number = 22,
        .city = "Bologna",
        .province = "CG",
        .postal_code = "40225"
    };
    ElemType e3 = {
        .name = "1",
        .street = "Via Delle Bombe",
        .number = 1,
        .city = "Rubiera",
        .province = "RB",
        .postal_code = "42134"
    };
    ElemType e4 = {
        .name = "2",
        .street = "Via Della Pace",
        .number = 5,
        .city = "Modena",
        .province = "CP",
        .postal_code = "41136"
    };
    

    Item *list = ListCreateEmpty();
    

    list = ListInsertBack(list, &e1);
    list = ListInsertBack(list, &e2);
    list = ListInsertBack(list, &e3);
    list = ListInsertBack(list, &e4);
    
    
    list = Sort(list);
    
    ListWriteStdout(list);
    
    ListDelete(list);
    return 0;
}
