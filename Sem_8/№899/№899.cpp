#include <iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;


int main()
{
    fstream infile("input.txt");
    fstream outfile("output.txt");
    string s;
    vector <char> open;
    while (getline(infile, s)) {								//итерируемся по строкам из файла
        open.clear();
        for (int i = 0; i < s.size(); ++i) {					//итерируемся по строке
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                open.push_back(s[i]); 							//если встретилась открывающаяся скобка, то фиксируем её
            }
            else if (s[i] == ')') {								//если встретилась зарывающаяся скобка, то перед ней должна быть открывающаяся такого же типа
                if (open.back() == '(') {
                    open.pop_back();
                }
                else {
                    break;
                }
            }
            else if (s[i] == ']') {
                if (open.back() == '[') {
                    open.pop_back();
                }
                else {
                    break;
                }
            }
            else if (s[i] == '}') {
                if (open.back() == '{') {
                    open.pop_back();
                }
                else {
                    break;
                }
            }
        }
        if (open.size() == 0) {
            outfile << 0;
        }
        else {
            outfile << 1;
        }
    }
}

