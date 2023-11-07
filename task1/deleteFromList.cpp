#include"..\task1\functions.h"


product* deleteFromList(product* productList, std::string searchName, int& productAmount) {
    int productPlaceInList = 0;
    do {
        if (productPlaceInList == -1) {
            std::cin >> searchName;
        }

        productPlaceInList = -1;

        for (int i = 0; i < productAmount; i++) {
            if (productList[i].productName == searchName) {
                productPlaceInList = i;
                break;
            }
        }

        if (productPlaceInList == -1) {
            // Ёлемент с указанным именем не найден, возвращаем исходный массив без изменений
            return productList;
        }
        product* newProductList = new product[productAmount];
        for (int i = 0; i < productPlaceInList; i++) {
            newProductList[i] = productList[i];
        }
        for (int i = productPlaceInList + 1; i < productAmount; i++) {
            newProductList[i - 1] = productList[i];
        }
        productAmount--;
        delete[] productList;

        if (productPlaceInList == (-1)) {
            std::cout << "ƒанного издели€ в списке не нашлось. ѕопробуйте ввести название снова\n";
        }
        else {
            return newProductList;
        }
    } while (productPlaceInList == (-1));

}