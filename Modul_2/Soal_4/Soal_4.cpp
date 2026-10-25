#include <iostream>
using namespace std;

void tukar(int &x, int &y) {
    int temp;

    temp = x;
    x = y;
    y = temp;

    x = x * 10;
    y = y * 10;
}

int main() {
    int x, y;

    cin >> x >> y;

    tukar(x, y);

    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}