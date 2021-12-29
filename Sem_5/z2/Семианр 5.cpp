#include <iostream>
#include<fstream>;
#include<string>;
using namespace std;

int main()
{
    ifstream fin;
    fin.open("file.txt");
    if (!fin)
    {
        cout << "error opening file" << endl;
        return 0;
    }
    string s;
    ofstream fout("out.txt");
    while (!fin.eof()) {
        fin >> s;
        int k = 0;
        for (int i = 0; i < size(s); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                break;
            }
            else k++;
        }
        if (k == size(s)) {
            fout << s << " ";
        }
    }
    fin.close();
    return 0;

}

