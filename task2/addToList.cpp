#include"functions.h"


costumer* addToList(costumer* costumerList, costumer tempCostumer, int& costumerAmount) {
    
    costumer* newCostumerList = new costumer[costumerAmount + 1];

    for (int i = 0; i < costumerAmount; i++) {
        newCostumerList[i] = costumerList[i];
    }

    // Добавляем новый элемент в конец нового массива
    newCostumerList[costumerAmount] = tempCostumer;
    costumerAmount++;

    // Освобождаем память, занятую исходным массивом
    delete[] costumerList;

    return newCostumerList;
}