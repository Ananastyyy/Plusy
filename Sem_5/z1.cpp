#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Задача 1. Дан текстовый файл, содержащий целые числа.
//Удалить из него все четные числа.

int main()
{
    string fileName = "numbers.txt";
    ifstream file(fileName);

    if (!file)
    {
        cout << "error opening file" << endl;
        return 0;
    }

    string word;
    string result;
    char number;
    while (!file.eof())
    {
        file >> word;
        cout << word << endl;
        for (int i = 0; i < word.length(); i++)
        {
            number = int(word[i]);
            if (number % 2 == 1) {
                result += number;
            }
        }
        cout << result << endl;
    }
    file.close();
}