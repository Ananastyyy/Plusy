#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <regex>
#include <cctype>

using namespace std;
void spellingCheck(vector <string>& dictionary, vector <string>& writing)
{
    unsigned int n, m;
    fstream file("input.txt");           //открываем файл
    file >> n;
    file >> m;
    while (!file.eof())
    {
        for (int i = 0; i < n; ++i)      //вносим все данные
        {
            string s;
            file >> s;
            dictionary.push_back(s);
        }
        string s;
        while (!file.eof())
        {
            string temp;                 //избавляемся от знаков препинания
            file >> s;
            for (int i = 0; i < size(s); i++)
            {
                if (s[i] == '.' || s[i] == ',' ||  s[i] == '-' || s[i] == '!' || s[i] == ':' || s[i] == ';' || s[i] == '?' || s[i] == '\'' || s[i]=='\"') 
                {
                    continue;
                }
                temp += tolower(s[i]);   //все буквы в сочинении делаем строчными
            }
            writing.push_back(temp);
            cout << temp << endl;
        }
    }
}


int main() {
    fstream outfile("output.txt");
    vector <string> dictionary;
    vector <string> writing;
    spellingCheck(dictionary, writing);
    vector <int> count(dictionary.size());
    for (int i = 0; i < dictionary.size(); ++i) {       //сравниваем слова из словаря со словами 
        for (int j = 0; j < writing.size(); ++j) {
            if (dictionary[i]== writing[j]) {
                count[i]++;
            }
        }
    }
    int coun = 0;
    int sum = 0;
    for (int i = 0; i < count.size(); i++) {
        if (count[i] == 0) {
            coun++;
        }
        sum += count[i];
    }
    if (sum == writing.size() && coun==0) {                         //если количество всех слов (считаются абсолютно все вхождения) из словаря равно длине сочинения
        outfile<<"Everything is going to be OK.";
    }
    else if (sum < writing.size() && coun == 0) {                   //если количество всех слов из словаря меньше длины сочинения, но использовались все слова из словаря
        outfile<< " Some words from the text are unknown.";         
    }
    else if (sum == writing.size() && coun > 0) {                   //если количество всех слов из словаря равно длине сочинения, но использовались не все слова из словаря
        outfile<<"The usage of the vocabulary is not perfect.";
    }
}