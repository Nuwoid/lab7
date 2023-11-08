#include"functions.h"


void changeFromList(costumer* costumerList, costumer tempCostumer, int costumerAmount) {
    std::string strCheck;
    int changer = 0;
    int neededNameIndex = 0;

    bool find = true;
    do {
        if (!(find)) {
            std::cout << "Введите фамилию заказчика: ";
            std::cin >> tempCostumer.secondName;

            std::cout << "Введите имя заказчика: ";
            std::cin >> tempCostumer.firstName;

            std::cout << "Введите отчество заказчика: ";
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
            std::cout << "Данного в клиента не нашлось. Попробуйте ввести его Ф.И.О снова.\n";
        }
    } while (!(find));

    std::cout << "Введите значение структуры, которое хотели бы поменять:\n"
        << "1) Изменить Ф.И.О ;\n"
        << "2) Изменить дату постановки заказа на учет\n"
        << "3) Изменить адрес заказчика;\n"
        << "4) Изменить порядковый номер заказа ;\n"
        << "5) Вернуться обратно в меню ;\n";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    changer = stoll(strCheck);

    switch (changer) {
    case 1:
        std::cout << "Введите измененное Ф.И.О: ";
        std::cout << "Введите фамилию заказчика: ";
        std::cin >> costumerList[neededNameIndex].secondName;

        std::cout << "Введите имя заказчика: ";
        std::cin >> costumerList[neededNameIndex].firstName;

        std::cout << "Введите отчество заказчика: ";
        std::cin >> costumerList[neededNameIndex].middleName;
        break;

    case 2:
        std::cout << "Дата постановки заказа на учет: \n";
        std::cout << "Введите год поступления заказа: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        costumerList[neededNameIndex].orderRegistration.year = stoll(strCheck);

        std::cout << "Введите месяц поступления заказа: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        costumerList[neededNameIndex].orderRegistration.month = stoll(strCheck);

        std::cout << "Введите день поступления заказа: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        costumerList[neededNameIndex].orderRegistration.day = stoll(strCheck);
        break;

    case 3:
        std::cout << "Домашний адрес заказчика: \n";
        std::cout << "Введите город заказчика: ";
        std::cin >> costumerList[neededNameIndex].homeAddress.city;

        std::cout << "Введите улицу заказчика: ";
        std::cin >> costumerList[neededNameIndex].homeAddress.street;

        std::cout << "Введите номер дома заказчика: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        costumerList[neededNameIndex].homeAddress.house = stoll(strCheck);

        std::cout << "Введите номер квартиры заказчика: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        costumerList[neededNameIndex].homeAddress.flatNumber = stoll(strCheck);
        break;

    case 4:
        std::cout << "\nВведите порядковый номер заказа: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        costumerList[neededNameIndex].orderNum = stoll(strCheck);

    case 5:
        break;

    default: std::cout << "Упс, что-то пошло не так. Возвращение в меню\n";
        break;
    }
}

