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

    std::cout << "������ �����, ��� ����� ������� ��������� ��������: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "�������� ���������� ���� ��� �� ��'����� ����� �����." << std::endl;
    }
    else {
        unsigned long long result;
        calculateFactorial(num, result);
        std::cout << "�������� " << num << " ������� " << result << std::endl;
       
    }

    return 0;
}

