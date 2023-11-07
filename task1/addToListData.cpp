#include"D:\codeMb\Лабораторные\Lab7\task1\task1\functions.h"


product* addToList(product* productList, int& productAmount, product temp) {

    product* newProductList = new product[productAmount + 1];

    for (int i = 0; i < productAmount; i++) {
        newProductList[i] = productList[i];
    }

    // Добавляем новый элемент в конец нового массива
    newProductList[productAmount] = temp;
    productAmount++;

    // Освобождаем память, занятую исходным массивом
    delete[] productList;

    return newProductList;
}