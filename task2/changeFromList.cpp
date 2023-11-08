#include"functions.h"


void changeFromList(costumer* costumerList, costumer tempCostumer, int costumerAmount) {
    std::string strCheck;
    int changer = 0;
    int neededNameIndex = 0;

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
                (costumerList[i].firstName == tempCostumer.firstName) &&
                (costumerList[i].middleName == tempCostumer.middleName)) {
                outputInLoop(costumerList, i);
                find = true;
                neededNameIndex = i;
            }
        }
        if (!(find)) {
            std::cout << "������� � ������� �� �������. ���������� ������ ��� �.�.� �����.\n";
        }
    } while (!(find));

    std::cout << "������� �������� ���������, ������� ������ �� ��������:\n"
        << "1) �������� �.�.� ;\n"
        << "2) �������� ���� ���������� ������ �� ����\n"
        << "3) �������� ����� ���������;\n"
        << "4) �������� ���������� ����� ������ ;\n"
        << "5) ��������� ������� � ���� ;\n";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    changer = stoll(strCheck);

    switch (changer) {
    case 1:
        std::cout << "������� ���������� �.�.�: ";
        std::cout << "������� ������� ���������: ";
        std::cin >> costumerList[neededNameIndex].secondName;

        std::cout << "������� ��� ���������: ";
        std::cin >> costumerList[neededNameIndex].firstName;

        std::cout << "������� �������� ���������: ";
        std::cin >> costumerList[neededNameIndex].middleName;
        break;

    case 2:
        std::cout << "���� ���������� ������ �� ����: \n";
        std::cout << "������� ��� ����������� ������: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        costumerList[neededNameIndex].orderRegistration.year = stoll(strCheck);

        std::cout << "������� ����� ����������� ������: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        costumerList[neededNameIndex].orderRegistration.month = stoll(strCheck);

        std::cout << "������� ���� ����������� ������: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        costumerList[neededNameIndex].orderRegistration.day = stoll(strCheck);
        break;

    case 3:
        std::cout << "�������� ����� ���������: \n";
        std::cout << "������� ����� ���������: ";
        std::cin >> costumerList[neededNameIndex].homeAddress.city;

        std::cout << "������� ����� ���������: ";
        std::cin >> costumerList[neededNameIndex].homeAddress.street;

        std::cout << "������� ����� ���� ���������: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        costumerList[neededNameIndex].homeAddress.house = stoll(strCheck);

        std::cout << "������� ����� �������� ���������: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        costumerList[neededNameIndex].homeAddress.flatNumber = stoll(strCheck);
        break;

    case 4:
        std::cout << "\n������� ���������� ����� ������: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        costumerList[neededNameIndex].orderNum = stoll(strCheck);

    case 5:
        break;

    default: std::cout << "���, ���-�� ����� �� ���. ����������� � ����\n";
        break;
    }
}

