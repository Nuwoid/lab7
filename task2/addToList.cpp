#include"functions.h"


costumer* addToList(costumer* costumerList, costumer tempCostumer, int& costumerAmount) {
    
    costumer* newCostumerList = new costumer[costumerAmount + 1];

    for (int i = 0; i < costumerAmount; i++) {
        newCostumerList[i] = costumerList[i];
    }

    // ��������� ����� ������� � ����� ������ �������
    newCostumerList[costumerAmount] = tempCostumer;
    costumerAmount++;

    // ����������� ������, ������� �������� ��������
    delete[] costumerList;

    return newCostumerList;
}