#include <iostream>
#include <cmath>


using namespace std;


// Функция для сложения
double add(double a, double b) {
    return a + b;
}

// Функция для вычитания
double subtract(double a, double b) {
    return a - b;
}

// Функция для умножения
double multiply(double a, double b) {
    return a * b;
}

// Функция для деления
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        cout << "Ошибка: Деление на ноль!" << endl;
        return 0;
    }
}

// Функция для возведения в степень
double power(double base, double exponent) {
    return pow(base, exponent);
}

// Функция для нахождения квадратного корня
double squareRoot(double num) {
    if (num >= 0) {
        return sqrt(num);
    }
    else {
        cout << "Ошибка: Невозможно извлечь корень из отрицательного числа!" << endl;
        return 0;
    }
}

// Функция для нахождения 1 процента от числа
double percent(double num) {
    return num * 0.01;
}

// Функция для нахождения факториала числа
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int choice;
    double num1, num2;
    setlocale(LC_ALL, "Russian");
    do {
        cout << "Выберите операцию:" << endl;
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Умножение" << endl;
        cout << "4. Деление" << endl;
        cout << "5. Возведение в степень" << endl;
        cout << "6. Квадратный корень" << endl;
        cout << "7. 1 процент от числа" << endl;
        cout << "8. Факториал числа" << endl;
        cout << "9. Выйти из программы" << endl;
        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введите два числа для сложения: ";
            cin >> num1 >> num2;
            cout << "Результат: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Введите два числа для вычитания: ";
            cin >> num1 >> num2;
            cout << "Результат: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Введите два числа для умножения: ";
            cin >> num1 >> num2;
            cout << "Результат: " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Введите два числа для деления: ";
            cin >> num1 >> num2;
            cout << "Результат: " << divide(num1, num2) << endl;
            break;
        case 5:
            cout << "Введите основание и показатель степени: ";
            cin >> num1 >> num2;
            cout << "Результат: " << power(num1, num2) << endl;
            break;
        case 6:
            cout << "Введите число для нахождения квадратного корня: ";
            cin >> num1;
            cout << "Результат: " << squareRoot(num1) << endl;
            break;
        case 7:
            cout << "Введите число для нахождения 1 процента: ";
            cin >> num1;
            cout << "Результат: " << percent(num1) << endl;
            break;
        case 8:
            cout << "Введите число для нахождения факториала: ";
            cin >> num1;
            cout << "Результат: " << factorial(static_cast<int>(num1)) << endl;
            break;
        case 9:
            cout << "Программа завершена." << endl;
            break;
        default:
            cout << "Неверный выбор. Пожалуйста, выберите снова." << endl;
        }

    } while (choice != 9);

    return 0;
}