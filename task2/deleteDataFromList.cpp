#include"functions.h"

costumer* deleteFromList(costumer* costumerList, costumer tempCostumer, int& costumerAmount) {
    int costumerPlaceInList = 0;

    do {
        if (costumerPlaceInList == -1) {
            std::cout << "Введите фамилию заказчика: ";
            std::cin >> tempCostumer.secondName;

            std::cout << "Введите имя заказчика: ";
            std::cin >> tempCostumer.firstName;

            std::cout << "Введите отчество заказчика: ";
            std::cin >> tempCostumer.middleName;
        }

        costumerPlaceInList = -1;

        for (int i = 0; i < costumerAmount; i++) {
            if ((costumerList[i].secondName == tempCostumer.secondName) &&
                (costumerList[i].firstName == tempCostumer.firstName) &&
                (costumerList[i].middleName == tempCostumer.middleName)) {
                costumerPlaceInList = i;
                break;
            }
        }

        costumer* newCostumerList = new costumer[costumerAmount];
        for (int i = 0; i < costumerPlaceInList; i++) {
            newCostumerList[i] = costumerList[i];
        }

        for (int i = costumerPlaceInList + 1; i < costumerAmount; i++) {
            newCostumerList[i - 1] = costumerList[i];
        }

        costumerAmount--;
        delete[] costumerList;

        if (costumerPlaceInList == (-1)) {
            std::cout << "Данного заказчика в списке не нашлось. Попробуйте ввести Ф.И.О снова.";
        }
        else {
            return newCostumerList;
        }
    } while (costumerPlaceInList == (-1));

}