#include"functions.h"


void lookThroughList(costumer* costumerList, int costumerAmount) {
    std::cout << "\n========= Весь список лиц, записавшихся на покупку товара: =========\n";
    for (int i = 0; i < costumerAmount; i++) {
        outputInLoop(costumerList, i);
    }
}