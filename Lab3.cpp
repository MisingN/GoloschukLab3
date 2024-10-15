#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Num: ";
    cin >> n;

    int res = 1;

    while (n > 1) {
        res *= n;
        n--;
    }

    cout << "Factorial: " << res;
}
