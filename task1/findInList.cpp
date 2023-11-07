#include"..\task1\functions.h"


void findInList(product* productList, std::string searchName, int productAmount) {
    bool find = true;
    do {
        if (!(find)) {
            std::cin >> searchName;
        }
        find = false;
        for (int i = 0; i < productAmount; i++) {
            if (productList[i].productName == searchName) {
                outputInLoop(productList, i);
                find = true;
            }
        }
        if (!(find)) {
            std::cout << "Данного изделия в списке не нашлось. Попробуйте ввести его название снова\n";
        }
    } while (!(find));
}