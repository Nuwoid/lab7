#include"functions.h"


void inputDataInLoop(costumer* costumerList, int i) {
    std::string strCheck;


    //orderNum
    std::cout << "¬ведите пор€дковый номер заказа: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumerList[i].orderNum = stoll(strCheck);


    //personInfo
    std::cout << "¬ведите фамилию заказчика: ";
    std::cin >> costumerList[i].secondName;

    std::cout << "¬ведите им€ заказчика: ";
    std::cin >> costumerList[i].firstName;

    std::cout << "¬ведите отчество заказчика: ";
    std::cin >> costumerList[i].middleName;


    //homeAddress
    std::cout << "ƒомашний адрес заказчика: \n";
    std::cout << "¬ведите город заказчика: ";
    std::cin >> costumerList[i].homeAddress.city;

    std::cout << "¬ведите улицу заказчика: ";
    std::cin >> costumerList[i].homeAddress.street;

    std::cout << "¬ведите номер дома заказчика: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumerList[i].homeAddress.house = stoll(strCheck);

    std::cout << "¬ведите номер квартиры заказчика: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumerList[i].homeAddress.flatNumber = stoll(strCheck);


    //orderRegistration
    std::cout << "ƒата постановки заказа на учет: \n";
    std::cout << "¬ведите год поступлени€ заказа: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumerList[i].orderRegistration.year = stoll(strCheck);

    std::cout << "¬ведите мес€ц поступлени€ заказа: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumerList[i].orderRegistration.month = stoll(strCheck);

    std::cout << "¬ведите день поступлени€ заказа: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumerList[i].orderRegistration.day = stoll(strCheck);

    std::cout << "\n";
}


costumer inputData(costumer costumer) {
    std::string strCheck;


    //orderNum
    std::cout << "\n¬ведите пор€дковый номер заказа : ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumer.orderNum = stoll(strCheck);


    //personInfo
    std::cout << "¬ведите фамилию заказчика: ";
    std::cin >> costumer.secondName;

    std::cout << "¬ведите им€ заказчика: ";
    std::cin >> costumer.firstName;

    std::cout << "¬ведите отчество заказчика: ";
    std::cin >> costumer.middleName;


    //homeAddress
    std::cout << "ƒомашний адрес заказчика: \n";
    std::cout << "¬ведите город заказчика: ";
    std::cin >> costumer.homeAddress.city;

    std::cout << "¬ведите улицу заказчика: ";
    std::cin >> costumer.homeAddress.street;

    std::cout << "¬ведите номер дома заказчика: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumer.homeAddress.house = stoll(strCheck);

    std::cout << "¬ведите номер квартиры заказчика: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumer.homeAddress.flatNumber = stoll(strCheck);


    //orderRegistration
    std::cout << "ƒата постановки заказа на учет: \n";
    std::cout << "¬ведите год поступлени€ заказа: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumer.orderRegistration.year = stoll(strCheck);

    std::cout << "¬ведите мес€ц поступлени€ заказа: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumer.orderRegistration.month = stoll(strCheck);

    std::cout << "¬ведите день поступлени€ заказа: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumer.orderRegistration.day = stoll(strCheck);

    std::cout << "\n";

    return costumer;
}