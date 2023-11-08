#include"functions.h"


void findInList(costumer* costumerList, costumer tempCostumer, int costumerAmount) {
    bool find = true;
    do {
        if (!(find)) {
            std::cout << "Введите фамилию заказчика: ";
            std::cin >> tempCostumer.secondName;

            std::cout << "Введите имя заказчика: ";
            std::cin >> tempCostumer.firstName;

            std::cout << "Введите отчество заказчика: ";
            std::cin >> tempCostumer.middleName;
        }
        find = false;
        for (int i = 0; i < costumerAmount; i++) {
            if ((costumerList[i].secondName == tempCostumer.secondName) &&
                (costumerList[i].firstName == tempCostumer.firstName)&&
                (costumerList[i].middleName == tempCostumer.middleName)){

                outputInLoop(costumerList, i);
                find = true;
            }
        }
        if (!(find)) {
            std::cout << "Данного в клиента не нашлось. Попробуйте ввести его Ф.И.О снова. ";
        }
    } while (!(find));
}