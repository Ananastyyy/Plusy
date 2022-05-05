#include <iostream>
#include<fstream>
#include<vector>
#include <iomanip>
using namespace std;

int main(){
    ifstream in;
    ofstream out;
    in.open("INPUT.TXT");
    out.open("OUTPUT.TXT");
    int n;
    in >> n;
    float d, e, pd, pe, sum;
    sum = 100;
    in >> pd >> pe;
    for (int i = 0; i < n - 1; ++i){
        in >> d >> e;
        if (pd < d || pe < e){
            sum = max(((sum - pd * (sum / pd)) + (sum / pd) * (d)), ((sum - pe * (sum / pe)) + (sum / pe) * (e)));
        }
        pd = d;
        pe = e;
    }
    out << fixed << setprecision(2) << sum << endl;
}