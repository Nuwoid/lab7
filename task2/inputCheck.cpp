#include<string>
#include<iostream>
#include<algorithm>
#include"inputCheck.h"


std::string inputCheckForPos(std::string s) {
    std::string x = s;
    int j = 0;

    int arr[20]{ 7, 0, 8, 5, 7, 7, 4, 5, 8, 6, 3, 0, 2, 7, 3, 3, 2, 2, 9, 0 };
    bool isNumber = true;
    do {
        if (!(isNumber)) {
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            std::cin >> x;
        }
        isNumber = true;
        j = 0;
        int count11 = x.length();

        if (!(all_of(x.begin(), x.end(), ::isdigit))) {
            std::cout << "«начение числа n было введено неправильно. ¬ведите значение повторно\n";
            isNumber = false;
        }
        else {
            for (int i = count11 - 1; i >= 0; i--)
            {
                if (x[j] - '0' > arr[i]) {
                    isNumber = false;
                }
                j++;
            }
            j = 0;
            if (x[0] == '-') {
                isNumber = false;
            }
            else if (count11 > 20) {
                isNumber = false;
            }
            else if (count11 < 19) {
                isNumber = true;
            }
            else if (count11 == 19 || count11 == 20) {
                for (int i = 19; i >= 0; i--)
                {
                    if (x[j] - '0' > arr[i]) {
                        isNumber = false;
                    }
                    j++;
                }
            }
            if (!(isNumber)) {
                std::cout << "«начение было введено неправильно. ¬ведите значение повторно\n";
            }
        }
    } while (!(isNumber));
    std::string n2 = x;
    s = n2;
    return s;
}


std::string inputCheckForLL(std::string s) {
    std::string x = s;
    bool isNumber = true;
    bool minusLook = false;
    int j = 0;
    int arr[20]{ 7, 0, 8, 5, 7, 7, 4, 5, 8, 6, 3, 0, 2, 7, 3, 3, 2, 2, 9, 0 };
    do {
        if (!(isNumber)) {
            x.clear();
            std::cin >> x;
        }
        isNumber = true;
        minusLook = false;
        int count11 = x.length();
        j = 0;

        if (x[0] == '-') {
            minusLook = true;
            if (count11 == 1) {
                isNumber = false;
                std::cout << "«начение не может содержать только минус. ¬ведите значение повторно\n";
            }
            else {
                x.erase(0, 1);
                if (!(all_of(x.begin(), x.end(), ::isdigit))) {
                    isNumber = false;
                    std::cout << "«начение было введено неправильно. ¬ведите значение повторно\n";
                }
                else {
                    for (int i = count11 - 1; i >= 0; i--)
                    {
                        if (x[j] - '0' > arr[i]) {
                            isNumber = false;
                        }
                        j++;
                    }
                    j = 0;
                    if (x[0] == '-') {
                        isNumber = false;
                    }
                    else if (count11 > 20) {
                        isNumber = false;
                    }
                    else if (count11 < 19) {
                        isNumber = true;
                    }
                    else if (count11 == 19 || count11 == 20) {
                        for (int i = 19; i >= 0; i--)
                        {
                            if (x[j] - '0' > arr[i]) {
                                isNumber = false;
                            }
                            j++;
                        }
                    }
                    if (!(isNumber)) {
                        std::cout << "«начение было введено неправильно. ¬ведите значение повторно\n";
                    }
                }
            }
        }
        else {
            if (!(all_of(x.begin(), x.end(), ::isdigit))) {
                isNumber = false;
                std::cout << "«начение было введено неправильно. ¬ведите значение повторно\n";
            }
            else {
                for (int i = count11 - 1; i >= 0; i--)
                {
                    if (x[j] - '0' > arr[i]) {
                        isNumber = false;
                    }
                    j++;
                }
                j = 0;
                if (count11 > 20) {
                    isNumber = false;
                }
                else if (count11 < 19) {
                    isNumber = true;
                }
                else if (count11 == 19 || count11 == 20) {
                    for (int i = 19; i >= 0; i--)
                    {
                        if (x[j] - '0' > arr[i]) {
                            isNumber = false;
                        }
                        j++;
                    }
                }
                if (!(isNumber)) {
                    std::cout << "«начение было введено неправильно. ¬ведите значение повторно\n";
                }
            }
        }
    } while (!(isNumber));
    if (minusLook) {
        x.insert(0, "-");
    }
    std::string n2 = x;
    s = n2;
    return s;
}

std::string inputCheckForInt(std::string s) {
    std::string x = s;
    bool isNumber = true;
    bool minusLook = false;
    int j = 0;
    int arr[9]{ 8, 4, 6, 3, 8, 4, 2, 1, 0 };
    do {
        if (!(isNumber)) {
            x.clear();
            std::cin >> x;
        }
        isNumber = true;
        minusLook = false;
        int count11 = x.length();
        j = 0;

        if (x[0] == '-') {
            minusLook = true;
            if (count11 == 1) {
                isNumber = false;
                std::cout << "«начение не может содержать только минус. ¬ведите значение повторно\n";
            }
            else {
                x.erase(0, 1);
                if (!(all_of(x.begin(), x.end(), ::isdigit))) {
                    isNumber = false;
                    std::cout << "«начение было введено неправильно. ¬ведите значение повторно\n";
                }
                else {
                    for (int i = count11 - 1; i >= 0; i--)
                    {
                        if (x[j] - '0' > arr[i]) {
                            isNumber = false;
                        }
                        j++;
                    }
                    j = 0;
                    if (x[0] == '-') {
                        isNumber = false;
                    }
                    else if (count11 > 9) {
                        isNumber = false;
                    }
                    else if (count11 < 8) {
                        isNumber = true;
                    }
                    else if (count11 == 9 || count11 == 8) {
                        for (int i = 8; i >= 0; i--)
                        {
                            if (x[j] - '0' > arr[i]) {
                                isNumber = false;
                            }
                            j++;
                        }
                    }
                    if (!(isNumber)) {
                        std::cout << "«начение было введено неправильно. ¬ведите значение повторно\n";
                    }
                }
            }
        }
        else {
            if (!(all_of(x.begin(), x.end(), ::isdigit))) {
                isNumber = false;
                std::cout << "«начение было введено неправильно. ¬ведите значение повторно\n";
            }
            else {
                for (int i = count11 - 1; i >= 0; i--)
                {
                    if (x[j] - '0' > arr[i]) {
                        isNumber = false;
                    }
                    j++;
                }
                j = 0;
                if (x[0] == '-') {
                    isNumber = false;
                }
                else if (count11 > 9) {
                    isNumber = false;
                }
                else if (count11 < 8) {
                    isNumber = true;
                }
                else if (count11 == 9 || count11 == 8) {
                    for (int i = 8; i >= 0; i--)
                    {
                        if (x[j] - '0' > arr[i]) {
                            isNumber = false;
                        }
                        j++;
                    }
                }
                if (!(isNumber)) {
                    std::cout << "«начение было введено неправильно. ¬ведите значение повторно\n";
                }
            }
        }
    } while (!(isNumber));
    if (minusLook) {
        x.insert(0, "-");
    }
    std::string n2 = x;
    s = n2;
    return s;
}

std::string inputCheckForPosInt(std::string s) {
    std::string x = s;
    int j = 0;
    int arr[9]{ 8, 4, 6, 3, 8, 4, 2, 1, 0 };
    bool isNumber = true;
    do {
        if (!(isNumber)) {
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            std::cin >> x;
        }
        isNumber = true;
        j = 0;
        int count11 = x.length();

        if (!(all_of(x.begin(), x.end(), ::isdigit))) {
            std::cout << "«начение числа n было введено неправильно. ¬ведите значение повторно\n";
            isNumber = false;
        }
        else {
            for (int i = count11 - 1; i >= 0; i--)
            {
                if (x[j] - '0' > arr[i]) {
                    isNumber = false;
                }
                j++;
            }
            j = 0;
            if (x[0] == '-') {
                isNumber = false;
            }
            else if (count11 > 9) {
                isNumber = false;
            }
            else if (count11 < 8) {
                isNumber = true;
            }
            else if (count11 == 9 || count11 == 8) {
                for (int i = 8; i >= 0; i--)
                {
                    if (x[j] - '0' > arr[i]) {
                        isNumber = false;
                    }
                    j++;
                }
            }
            if (!(isNumber)) {
                std::cout << "«начение было введено неправильно. ¬ведите значение повторно\n";
            }
        }
    } while (!(isNumber));
    std::string n2 = x;
    s = n2;
    return s;
}
