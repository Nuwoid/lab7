#include"..\task1\functions.h"

void startProgramm(int i) {
    setlocale(LC_ALL, "Rus");
    std::cout << "========= ������� 1 =========\n";
    std::string strCheck;
    std::string searchName;
    product temp;
    bool done = false;

    int productAmount = 1;
    std::cout << "������� ��������� ���������� �������, ������� ����� �������� � ������: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    productAmount = stoll(strCheck);

    product* productList = new product[productAmount];
    for (int i = 0; i < productAmount; i++) {
        inputDataInLoop(productList, i);
    }

    std::sort(productList, productList + productAmount, compareByName);

    do {
        int change = 0;
        std::cout << "========= ������� ���� ��������� =========\n"
            << "1) �������� ������;\n"
            << "2) �������� ������� � ������;\n"
            << "3) ����� ������������ ������� � ������;\n"
            << "4) ������� ������� �� ������;\n"
            << "5) �������� �������� ������� �� ������;\n"
            << "6) ��������� ������ ���������;\n";
        std::cout << "����: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        change = stoll(strCheck);

        switch (change) {
        case 1: lookThroughList(productList, productAmount);
            break;

        case 2:
            std::cout << "\n������� ������������ ������������ �������: ";
            std::cin >> temp.productName;
            toupper(temp.productName[0]);

            std::cout << "\n������� ���� ����������� �������: ";
            std::cin >> strCheck;
            strCheck = inputCheckForPosInt(strCheck);
            temp.getDate.day = stoll(strCheck);

            std::cout << "\n������� ����� ����������� �������: ";
            std::cin >> strCheck;
            strCheck = inputCheckForPosInt(strCheck);
            temp.getDate.month = stoll(strCheck);

            std::cout << "\n������� ��� ����������� �������: ";
            std::cin >> strCheck;
            strCheck = inputCheckForPosInt(strCheck);
            temp.getDate.year = stoll(strCheck);

            std::cout << "\n������� ��������� ���������� ������: ";
            std::cin >> temp.orderStatus;

            productList = addToList(productList, productAmount, temp);
            break;

        case 3:
            std::cout << "\n������� �������� ������, ������� �� ������ �� �����: \n";
            std::cin >> searchName;
            findInList(productList, searchName, productAmount);
            break;

        case 4:
            std::cout << "������� �������� ������, ������� �� ������ �� �������: \n";
            std::cin >> searchName;
            productList = deleteFromList(productList, searchName, productAmount);
            break;

        case 5:
            std::cout << "������� �������� ������, �������� ������� �� ������ �� ��������: \n";
            std::cin >> searchName;
            changeFromList(productList, searchName, productAmount);
            break;
        case 6:
            std::cout << "���������� ���������";
            done = true;
            break;

        default: std::cout << "���, ���-�� ����� �� ���\n\n";
            break;
        }

    } while (!done);

    delete[] productList;
}