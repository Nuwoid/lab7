#include"functions.h"


void lookThroughList(costumer* costumerList, int costumerAmount) {
    std::cout << "\n========= ���� ������ ���, ������������ �� ������� ������: =========\n";
    for (int i = 0; i < costumerAmount; i++) {
        outputInLoop(costumerList, i);
    }
}