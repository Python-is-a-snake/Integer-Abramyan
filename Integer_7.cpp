//Integer 7
#include <iostream>
using namespace std;
int main() {
    int a = 86;
    int a_1 = a / 10;
    int a_2 = a % 10;
    int s = a_1 + a_2;
    int p = a_1 * a_2;
    cout << "Summ: " << s << endl << "Mult: " << p;
    return 0;
}
