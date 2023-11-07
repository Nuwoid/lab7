#include"..\task1\functions.h"


void lookThroughList(product* productList, int productAmount) {
    std::cout << "\n========= Весь список сданной в ремонт радиоаппаратуры: =========\n";
    for (int i = 0; i < productAmount; i++) {
        outputInLoop(productList, i);
    }
}