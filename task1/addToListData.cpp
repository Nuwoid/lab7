#include"D:\codeMb\������������\Lab7\task1\task1\functions.h"


product* addToList(product* productList, int& productAmount, product temp) {

    product* newProductList = new product[productAmount + 1];

    for (int i = 0; i < productAmount; i++) {
        newProductList[i] = productList[i];
    }

    // ��������� ����� ������� � ����� ������ �������
    newProductList[productAmount] = temp;
    productAmount++;

    // ����������� ������, ������� �������� ��������
    delete[] productList;

    return newProductList;
}