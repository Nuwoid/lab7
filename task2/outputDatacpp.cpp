#include"functions.h"


void outputInLoop(costumer* costumerList, int i) {
    std::cout << "Вывод данных для " << i + 1 << " клиента\n";
    std::cout << "Порядковый номер заказа: " 
        << costumerList[i].orderNum << "\n";

    std::cout << "Ф.И.О: " 
        << costumerList[i].secondName << " "
        << costumerList[i].firstName << " "
        << costumerList[i].middleName << "\n";

    
    std::cout << "Домашний адрес: " 
        << "г. " << costumerList[i].homeAddress.city << ", "
        << "ул. " << costumerList[i].homeAddress.street << ", "
        << "дом " << costumerList[i].homeAddress.house << ", "
        << "кв. " << costumerList[i].homeAddress.flatNumber << "\n";

    std::cout << "Дата постановки заказа на учет: " 
        << costumerList[i].orderRegistration.day << "."                                      
        << costumerList[i].orderRegistration.month << "." 
        << costumerList[i].orderRegistration.year << "\n\n";
}


void output(costumer costumerList) {
    std::cout << "Порядковый номер заказа: "
        << costumerList.orderNum << "\n";

    std::cout << "Ф.И.О: "
        << costumerList.secondName << " "
        << costumerList.firstName << " "
        << costumerList.middleName << "\n";


    std::cout << "Домашний адрес: "
        << "г. " << costumerList.homeAddress.city << ", "
        << "ул. " << costumerList.homeAddress.street << ", "
        << "дом " << costumerList.homeAddress.house << ", "
        << "кв. " << costumerList.homeAddress.flatNumber << "\n";

    std::cout << "Дата постановки заказа на учет: "
        << costumerList.orderRegistration.day << "."
        << costumerList.orderRegistration.month << "."
        << costumerList.orderRegistration.year << "\n";
}
