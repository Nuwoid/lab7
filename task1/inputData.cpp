#include"..\task1\functions.h"


void inputDataInLoop(product* productList, int i) {
    std::string strCheck;

    std::cout << "������� ������������ ������������ �������: ";
    std::cin >> productList[i].productName;
    toupper(productList[i].productName[0]);

    std::cout << "������� ���� ����������� �������: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    productList[i].getDate.day = stoll(strCheck);

    std::cout << "������� ����� ����������� �������: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    productList[i].getDate.month = stoll(strCheck);

    std::cout << "������� ��� ����������� �������: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    productList[i].getDate.year = stoll(strCheck);

    std::cout << "������� ��������� ���������� ������: ";
    std::cin >> productList[i].orderStatus;
    std::cout << "\n";
}