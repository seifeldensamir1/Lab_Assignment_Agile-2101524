#include <iostream>
using namespace std;

int summation(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "Sum: " << summation(x, y) << endl;
    return 0;
}
