#include <fstream>
#include <cmath>
using namespace std;
int main() {
    ifstream ifst("input.txt");
    ofstream ofst("output.txt");
 
    int n;
    ifst >> n;
    long long max_power = pow(3, n / 3);
    if (n % 3 == 1)
        max_power = max_power * 4 / 3;
    if (n % 3 == 2)
        max_power = max_power * 2;
 
    ofst << max_power;
}