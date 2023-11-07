#include"..\task1\functions.h"

void startProgramm(int i) {
    setlocale(LC_ALL, "Rus");
    std::cout << "========= Задание 1 =========\n";
    std::string strCheck;
    std::string searchName;
    product temp;
    bool done = false;

    int productAmount = 1;
    std::cout << "Введите известное количество изделий, которые нужно добавить в список: ";
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
        std::cout << "========= Главное меню программы =========\n"
            << "1) Просмотр списка;\n"
            << "2) Добавить изделие в список;\n"
            << "3) Найти определенное изделие в списке;\n"
            << "4) Удалить изделие из списка;\n"
            << "5) Изменить название изделия из списка;\n"
            << "6) Закончить работу программы;\n";
        std::cout << "Ввод: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        change = stoll(strCheck);

        switch (change) {
        case 1: lookThroughList(productList, productAmount);
            break;

        case 2:
            std::cout << "\nВведите наименование поступившего изделия: ";
            std::cin >> temp.productName;
            toupper(temp.productName[0]);

            std::cout << "\nВведите день поступления изделия: ";
            std::cin >> strCheck;
            strCheck = inputCheckForPosInt(strCheck);
            temp.getDate.day = stoll(strCheck);

            std::cout << "\nВведите месяц поступления изделия: ";
            std::cin >> strCheck;
            strCheck = inputCheckForPosInt(strCheck);
            temp.getDate.month = stoll(strCheck);

            std::cout << "\nВведите год поступления изделия: ";
            std::cin >> strCheck;
            strCheck = inputCheckForPosInt(strCheck);
            temp.getDate.year = stoll(strCheck);

            std::cout << "\nВведите состояние готовности заказа: ";
            std::cin >> temp.orderStatus;

            productList = addToList(productList, productAmount, temp);
            break;

        case 3:
            std::cout << "\nВведите название изделя, которое вы хотели бы найти: \n";
            std::cin >> searchName;
            findInList(productList, searchName, productAmount);
            break;

        case 4:
            std::cout << "Введите название изделя, которое вы хотели бы удалить: \n";
            std::cin >> searchName;
            productList = deleteFromList(productList, searchName, productAmount);
            break;

        case 5:
            std::cout << "Введите название изделя, значения которой вы хотели бы поменять: \n";
            std::cin >> searchName;
            changeFromList(productList, searchName, productAmount);
            break;
        case 6:
            std::cout << "Завершение программы";
            done = true;
            break;

        default: std::cout << "Упс, что-то пошло не так\n\n";
            break;
        }

    } while (!done);

    delete[] productList;
}