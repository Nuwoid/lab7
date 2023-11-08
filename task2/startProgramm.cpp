#include"functions.h"


void startProgramm(int i) {
    setlocale(LC_ALL, "Rus");
    std::cout << "========= ������� 2 =========\n";
    std::string strCheck;
    std::string searchName;
    costumer temp;
    bool done = false;

    int costumerAmount = 1;
    std::cout << "������� ��������� ���������� ��������, ������� ����� �������� � ������: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumerAmount = stoll(strCheck);

    costumer* costumerList = new costumer[costumerAmount];
    for (int i = 0; i < costumerAmount; i++) {
        std::cout << "���� ������ ��� " << i + 1 << " �������\n";
        inputDataInLoop(costumerList, i);
    }


    do {
        std::sort(costumerList, costumerList + costumerAmount, compareByName);

        int change = 0;
        std::cout << "========= ������� ���� ��������� =========\n"
            << "1) �������� ������ ��������;\n"
            << "2) �������� ������� � ������;\n"
            << "3) ����� ������������� ������� � ������;\n"
            << "4) ������� ������� �� ������;\n"
            << "5) �������� ������ ������� � ������;\n"
            << "6) ��������� ������ ���������;\n";
        std::cout << "����: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        change = stoll(strCheck);


        switch (change) {
        case 1:
            lookThroughList(costumerList, costumerAmount);
            break;

        case 2:
            temp = inputData(temp);
            costumerList = addToList(costumerList, temp, costumerAmount);
            break;

        case 3:
            std::cout << "\n������� �.�.� ���������, �������� �� ������ �� �����: \n";
            std::cout << "������� ������� ���������: ";
            std::cin >> temp.secondName;

            std::cout << "������� ��� ���������: ";
            std::cin >> temp.firstName;

            std::cout << "������� �������� ���������: ";
            std::cin >> temp.middleName;

            findInList(costumerList, temp, costumerAmount);
            break;

        case 4:
            std::cout << "������� �������� ������, ������� �� ������ �� �������: \n";
            std::cin >> searchName;

            costumerList = deleteFromList(costumerList, temp, costumerAmount);
            break;

        case 5:
            std::cout << "\n������� �.�.� ���������, ������ �������� �� �� ������ ��������: \n";
            std::cout << "������� ������� ���������: ";
            std::cin >> temp.secondName;

            std::cout << "������� ��� ���������: ";
            std::cin >> temp.firstName;

            std::cout << "������� �������� ���������: ";
            std::cin >> temp.middleName;

            changeFromList(costumerList, temp, costumerAmount);
            break;
        case 6:
            std::cout << "���������� ���������";
            done = true;
            break;

        default: std::cout << "���, ���-�� ����� �� ���\n\n";
            break;
        }
    
    } while (!done);

    delete[] costumerList;
}