#include"..\task1\functions.h"


void outputInLoop(product* productList, int i) {
    std::cout << "Наименование изделия: " << productList[i].productName << "\n"
        << "Дата приемки в ремонт: " << productList[i].getDate.day << "." << productList[i].getDate.month << "." << productList[i].getDate.year << '\n'
        << "Cостояние готовности заказа: " << productList[i].orderStatus << "\n\n";
}
void output(product temp) {
    std::cout << "Наименование изделия: " << temp.productName << "\t"
        << "Дата приемки в ремонт: " << temp.getDate.day << "." << temp.getDate.month << "." << temp.getDate.year << '\t'
        << "Cостояние готовности заказа: " << temp.orderStatus << "\n\n";
}
