#include"functions.h"


void findInList(costumer* costumerList, costumer tempCostumer, int costumerAmount) {
    bool find = true;
    do {
        if (!(find)) {
            std::cout << "������� ������� ���������: ";
            std::cin >> tempCostumer.secondName;

            std::cout << "������� ��� ���������: ";
            std::cin >> tempCostumer.firstName;

            std::cout << "������� �������� ���������: ";
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
            std::cout << "������� � ������� �� �������. ���������� ������ ��� �.�.� �����. ";
        }
    } while (!(find));
}