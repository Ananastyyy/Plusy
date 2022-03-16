#include <iostream>
#include <fstream>
#include<list>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    list<double>num;
    list<double>result;
    ifstream file("файл.txt");
    if (!file)                                      //проверка на открытие файла
    {
        cout << "Файл не открыт" << endl;
        return -1;
    }
    while (!file.eof()) {                           //забиваем в лист num все значения
        double a;
        file >> a;
        num.push_back(a);
    }
    /*double sum = 0;								//организация сортировки вручную 
    int size = num.size();
    for (int k = 0; k < size; ++k) {                //прорабатыввем все занчения листа
        int count = -1;
        double min = numeric_limits<double>::max();
        int ind = -1;
        list<double>::iterator it;
        for (it = num.begin(); it != num.end(); ++it) { //ищем минимальный элемент
            if (*it <= min) {
                min = *it;
            }
        }
        result.push_back(min);                              //фиксируем минимальный элемент в листе result
        for (it = num.begin(); it != num.end(); ++it) {     //удаляем этот минимальный элемент(если же таких несколько, то только единственный)
            if (*it == min) {
                num.erase(it);
                break;
            }
        }
    }*/
    num.sort();                                            //сортируем через метод sort
    double sum = 0;
    for (double i : num) {                               //выводим весь отсортированный массив
        cout << i << endl;
        sum += i;
    }
    cout << sum / num.size() << endl;                    //находим среднее значение
}

