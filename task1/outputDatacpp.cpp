#include"..\task1\functions.h"


void outputInLoop(product* productList, int i) {
    std::cout << "������������ �������: " << productList[i].productName << "\n"
        << "���� ������� � ������: " << productList[i].getDate.day << "." << productList[i].getDate.month << "." << productList[i].getDate.year << '\n'
        << "C�������� ���������� ������: " << productList[i].orderStatus << "\n\n";
}
void output(product temp) {
    std::cout << "������������ �������: " << temp.productName << "\t"
        << "���� ������� � ������: " << temp.getDate.day << "." << temp.getDate.month << "." << temp.getDate.year << '\t'
        << "C�������� ���������� ������: " << temp.orderStatus << "\n\n";
}
