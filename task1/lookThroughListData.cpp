#include"..\task1\functions.h"


void lookThroughList(product* productList, int productAmount) {
    std::cout << "\n========= ���� ������ ������� � ������ ���������������: =========\n";
    for (int i = 0; i < productAmount; i++) {
        outputInLoop(productList, i);
    }
}