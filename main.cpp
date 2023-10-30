#include <iostream>
#include <Windows.h>
#include <math.h>


void calculateFactorial(int n, unsigned long long& result) {
    result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
}

int main() {
    system("chcp 1251");
    system("cls");
  
    int num;

    std::cout << "Введіть число, для якого потрібно обчислити факторіал: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Факторіал визначений лише для не від'ємних цілих чисел." << std::endl;
    }
    else {
        unsigned long long result;
        calculateFactorial(num, result);
        std::cout << "Факторіал " << num << " дорівнює " << result << std::endl;
       
    }

    return 0;
}

