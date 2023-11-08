#include"functions.h"


void startProgramm(int i) {
    setlocale(LC_ALL, "Rus");
    std::cout << "========= Задание 2 =========\n";
    std::string strCheck;
    std::string searchName;
    costumer temp;
    bool done = false;

    int costumerAmount = 1;
    std::cout << "Введите известное количество клиентов, которых нужно добавить в список: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    costumerAmount = stoll(strCheck);

    costumer* costumerList = new costumer[costumerAmount];
    for (int i = 0; i < costumerAmount; i++) {
        std::cout << "Ввод данных для " << i + 1 << " клиента\n";
        inputDataInLoop(costumerList, i);
    }


    do {
        std::sort(costumerList, costumerList + costumerAmount, compareByName);

        int change = 0;
        std::cout << "========= Главное меню программы =========\n"
            << "1) Просмотр списка клиентов;\n"
            << "2) Добавить клиента в список;\n"
            << "3) Найти определенного клиента в списке;\n"
            << "4) Удалить клиента из списка;\n"
            << "5) Изменить данные клиента в списке;\n"
            << "6) Закончить работу программы;\n";
        std::cout << "Ввод: ";
        std::cin >> strCheck;
        strCheck = inputCheckForPosInt(strCheck);
        change = stoll(strCheck);


        switch (change) {
        case 1:
            lookThroughList(costumerList, costumerAmount);
            break;

        case 2:
            temp = inputData(temp);
            costumerList = addToList(costumerList, temp, costumerAmount);
            break;

        case 3:
            std::cout << "\nВведите Ф.И.О заказчика, которого вы хотели бы найти: \n";
            std::cout << "Введите фамилию заказчика: ";
            std::cin >> temp.secondName;

            std::cout << "Введите имя заказчика: ";
            std::cin >> temp.firstName;

            std::cout << "Введите отчество заказчика: ";
            std::cin >> temp.middleName;

            findInList(costumerList, temp, costumerAmount);
            break;

        case 4:
            std::cout << "Введите название изделя, которое вы хотели бы удалить: \n";
            std::cin >> searchName;

            costumerList = deleteFromList(costumerList, temp, costumerAmount);
            break;

        case 5:
            std::cout << "\nВведите Ф.И.О заказчика, данные которого вы бы хотели изменить: \n";
            std::cout << "Введите фамилию заказчика: ";
            std::cin >> temp.secondName;

            std::cout << "Введите имя заказчика: ";
            std::cin >> temp.firstName;

            std::cout << "Введите отчество заказчика: ";
            std::cin >> temp.middleName;

            changeFromList(costumerList, temp, costumerAmount);
            break;
        case 6:
            std::cout << "Завершение программы";
            done = true;
            break;

        default: std::cout << "Упс, что-то пошло не так\n\n";
            break;
        }
    
    } while (!done);

    delete[] costumerList;
}