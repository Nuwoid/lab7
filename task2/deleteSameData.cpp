#include"functions.h"

costumer* deleteSameData(costumer* costumerList, int& costumerAmount) {

    for (int i = 0; i < costumerAmount; i++) {
        for (int j = i + 1; j < costumerAmount; j++) {
            //secondName && firstName && middleName && address
            if ((costumerList[i].firstName == costumerList[j].firstName) &&
                (costumerList[i].secondName == costumerList[j].secondName) &&
                (costumerList[i].middleName == costumerList[j].middleName) &&
                (costumerList[i].homeAddress.house == costumerList[j].homeAddress.house) &&
                (costumerList[i].homeAddress.flatNumber == costumerList[j].homeAddress.flatNumber) &&
                (costumerList[i].homeAddress.street == costumerList[j].homeAddress.street)){
                costumerList[j] = costumerList[costumerAmount - 1];
                j--;
                costumerAmount--;
            }
        }
    }

    costumer* newCostumerList = new costumer[costumerAmount];
    for (int i = 0; i < costumerAmount; i++) {
        newCostumerList[i] = costumerList[i];
    }

    delete[] costumerList;

    return newCostumerList;
}