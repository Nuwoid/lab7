#include"..\task1\functions.h"


void inputDataInLoop(product* productList, int i) {
    std::string strCheck;

    std::cout << "¬ведите наименование поступившего издели€: ";
    std::cin >> productList[i].productName;
    toupper(productList[i].productName[0]);

    std::cout << "¬ведите день поступлени€ издели€: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    productList[i].getDate.day = stoll(strCheck);

    std::cout << "¬ведите мес€ц поступлени€ издели€: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    productList[i].getDate.month = stoll(strCheck);

    std::cout << "¬ведите год поступлени€ издели€: ";
    std::cin >> strCheck;
    strCheck = inputCheckForPosInt(strCheck);
    productList[i].getDate.year = stoll(strCheck);

    std::cout << "¬ведите состо€ние готовности заказа: ";
    std::cin >> productList[i].orderStatus;
    std::cout << "\n";
}