#include"functions.h"


void inputDataInLoop(costumer* costumerList, int i) {
    std::string strCheck;


    //orderNum
    std::cout << "������� ���������� ����� ������: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumerList[i].orderNum = stoll(strCheck);


    //personInfo
    std::cout << "������� ������� ���������: ";
    std::cin >> costumerList[i].secondName;

    std::cout << "������� ��� ���������: ";
    std::cin >> costumerList[i].firstName;

    std::cout << "������� �������� ���������: ";
    std::cin >> costumerList[i].middleName;


    //homeAddress
    std::cout << "�������� ����� ���������: \n";
    std::cout << "������� ����� ���������: ";
    std::cin >> costumerList[i].homeAddress.city;

    std::cout << "������� ����� ���������: ";
    std::cin >> costumerList[i].homeAddress.street;

    std::cout << "������� ����� ���� ���������: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumerList[i].homeAddress.house = stoll(strCheck);

    std::cout << "������� ����� �������� ���������: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumerList[i].homeAddress.flatNumber = stoll(strCheck);


    //orderRegistration
    std::cout << "���� ���������� ������ �� ����: \n";
    std::cout << "������� ��� ����������� ������: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumerList[i].orderRegistration.year = stoll(strCheck);

    std::cout << "������� ����� ����������� ������: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumerList[i].orderRegistration.month = stoll(strCheck);

    std::cout << "������� ���� ����������� ������: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumerList[i].orderRegistration.day = stoll(strCheck);

    std::cout << "\n";
}


costumer inputData(costumer costumer) {
    std::string strCheck;


    //orderNum
    std::cout << "\n������� ���������� ����� ������ : ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumer.orderNum = stoll(strCheck);


    //personInfo
    std::cout << "������� ������� ���������: ";
    std::cin >> costumer.secondName;

    std::cout << "������� ��� ���������: ";
    std::cin >> costumer.firstName;

    std::cout << "������� �������� ���������: ";
    std::cin >> costumer.middleName;


    //homeAddress
    std::cout << "�������� ����� ���������: \n";
    std::cout << "������� ����� ���������: ";
    std::cin >> costumer.homeAddress.city;

    std::cout << "������� ����� ���������: ";
    std::cin >> costumer.homeAddress.street;

    std::cout << "������� ����� ���� ���������: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumer.homeAddress.house = stoll(strCheck);

    std::cout << "������� ����� �������� ���������: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumer.homeAddress.flatNumber = stoll(strCheck);


    //orderRegistration
    std::cout << "���� ���������� ������ �� ����: \n";
    std::cout << "������� ��� ����������� ������: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumer.orderRegistration.year = stoll(strCheck);

    std::cout << "������� ����� ����������� ������: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumer.orderRegistration.month = stoll(strCheck);

    std::cout << "������� ���� ����������� ������: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumer.orderRegistration.day = stoll(strCheck);

    std::cout << "\n";

    return costumer;
}