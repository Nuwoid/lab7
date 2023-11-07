#include"..\task1\functions.h"

void changeFromList(product* productList, std::string searchName, int productAmount) {
    std::string strCheck;
    int changer = 0;
    int neededNameIndex = 0;

    bool find = true;
    do {
        if (!(find)) {
            std::cin >> searchName;
        }
        find = false;
        for (int i = 0; i < productAmount; i++) {
            if (productList[i].productName == searchName) {
                outputInLoop(productList, i);
                find = true;
                neededNameIndex = i;
            }
        }
        if (!(find)) {
            std::cout << "Данного изделия в списке не нашлось. Попробуйте ввести его название снова\n";
        }
    } while (!(find));

    std::cout << "Введите значение структуры, которое хотели бы поменять:\n"
        << "1) Название изделия;\n"
        << "2) Дату приема изделия\n"
        << "3) Состояние готовности заказа;\n"
        << "4) Вернуться обратно в меню ;\n";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    changer = stoll(strCheck);

    switch (changer) {
    case 1:
        std::cout << "Введите измененное наименование изделия " << productList[neededNameIndex].productName << ": ";
        std::cin >> productList[neededNameIndex].productName;
        toupper(productList[neededNameIndex].productName[0]);
        break;

    case 2:
        std::cout << "Введите день поступления изделия: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        productList[neededNameIndex].getDate.day = stoll(strCheck);

        std::cout << "Введите месяц поступления изделия: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        productList[neededNameIndex].getDate.month = stoll(strCheck);

        std::cout << "Введите год поступления изделия: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        productList[neededNameIndex].getDate.month = stoll(strCheck);
        break;

    case 3:
        std::cout << "Введите измененное состояние готовности заказа изделия" << productList[neededNameIndex].productName << ": ";
        std::cin >> productList[neededNameIndex].orderStatus;
        break;

    case 4:
        break;

    default: std::cout << "Упс, что-то пошло не так. Возвращение в меню\n";
        break;
    }
}