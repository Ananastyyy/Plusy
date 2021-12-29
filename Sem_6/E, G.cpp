#include <iostream>
#include <fstream>

using namespace std;

//E: Сумма цифр числа
//Дано натуральное число N. Вычислите сумму его цифр.
//При решении этой задачи нельзя использовать строки, списки, массивы(ну и циклы, разумеется).

//G: Цифры числа слева направо
//Дано натуральное число N. Выведите все его цифры по одной, 
//в обычном порядке, разделяя их пробелами или новыми строками.
//При решении этой задачи нельзя использовать строки, списки, 
//массивы (ну и циклы, разумеется). Разрешена только рекурсия и целочисленная арифметика.

/*
int sum(int number)
{
    if (number < 10)
        return number;
    return sum(number / 10) + number % 10;
}

int main()
{
    int number;
    cin >> number;
    cout << sum(number) << endl;
}*/

 int numbers(int number, int extent)
{
    if (number / extent)
    {
        return numbers(number, (extent * 10));
    }
    else
    {
        extent /= 10;
        cout << number / extent << " ";
        number = number % extent;
        if (extent != 1) {
            return numbers(number, extent);
        }
        else {
            cout << endl;
        }
    }
}

int main()
{
    int number;
    cin >> number;
    numbers(number, 10);
    return 0;
}