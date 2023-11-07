#include"..\task1\functions.h"

void changeFromList(product* productList, std::string searchName, int productAmount) {
    std::string strCheck;
    int changer = 0;
    int neededNameIndex = 0;

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
                neededNameIndex = i;
            }
        }
        if (!(find)) {
            std::cout << "������� ������� � ������ �� �������. ���������� ������ ��� �������� �����\n";
        }
    } while (!(find));

    std::cout << "������� �������� ���������, ������� ������ �� ��������:\n"
        << "1) �������� �������;\n"
        << "2) ���� ������ �������\n"
        << "3) ��������� ���������� ������;\n"
        << "4) ��������� ������� � ���� ;\n";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    changer = stoll(strCheck);

    switch (changer) {
    case 1:
        std::cout << "������� ���������� ������������ ������� " << productList[neededNameIndex].productName << ": ";
        std::cin >> productList[neededNameIndex].productName;
        toupper(productList[neededNameIndex].productName[0]);
        break;

    case 2:
        std::cout << "������� ���� ����������� �������: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        productList[neededNameIndex].getDate.day = stoll(strCheck);

        std::cout << "������� ����� ����������� �������: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        productList[neededNameIndex].getDate.month = stoll(strCheck);

        std::cout << "������� ��� ����������� �������: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        productList[neededNameIndex].getDate.month = stoll(strCheck);
        break;

    case 3:
        std::cout << "������� ���������� ��������� ���������� ������ �������" << productList[neededNameIndex].productName << ": ";
        std::cin >> productList[neededNameIndex].orderStatus;
        break;

    case 4:
        break;

    default: std::cout << "���, ���-�� ����� �� ���. ����������� � ����\n";
        break;
    }
}