#include"functions.h"


void outputInLoop(costumer* costumerList, int i) {
    std::cout << "����� ������ ��� " << i + 1 << " �������\n";
    std::cout << "���������� ����� ������: " 
        << costumerList[i].orderNum << "\n";

    std::cout << "�.�.�: " 
        << costumerList[i].secondName << " "
        << costumerList[i].firstName << " "
        << costumerList[i].middleName << "\n";

    
    std::cout << "�������� �����: " 
        << "�. " << costumerList[i].homeAddress.city << ", "
        << "��. " << costumerList[i].homeAddress.street << ", "
        << "��� " << costumerList[i].homeAddress.house << ", "
        << "��. " << costumerList[i].homeAddress.flatNumber << "\n";

    std::cout << "���� ���������� ������ �� ����: " 
        << costumerList[i].orderRegistration.day << "."                                      
        << costumerList[i].orderRegistration.month << "." 
        << costumerList[i].orderRegistration.year << "\n\n";
}


void output(costumer costumerList) {
    std::cout << "���������� ����� ������: "
        << costumerList.orderNum << "\n";

    std::cout << "�.�.�: "
        << costumerList.secondName << " "
        << costumerList.firstName << " "
        << costumerList.middleName << "\n";


    std::cout << "�������� �����: "
        << "�. " << costumerList.homeAddress.city << ", "
        << "��. " << costumerList.homeAddress.street << ", "
        << "��� " << costumerList.homeAddress.house << ", "
        << "��. " << costumerList.homeAddress.flatNumber << "\n";

    std::cout << "���� ���������� ������ �� ����: "
        << costumerList.orderRegistration.day << "."
        << costumerList.orderRegistration.month << "."
        << costumerList.orderRegistration.year << "\n";
}
