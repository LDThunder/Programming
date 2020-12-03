
#include <iostream>

int main() {
using namespace std;
cout << "1 - po dline, 2 - po koordinatam: ";
int ch;
cin >> ch;
if (ch == 1) {
    int a, b, c;
    long p, s;
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    s = sqrt(p * ((p - a) + (p - b) + (p - c)));
    cout << s;
    }
else if (ch == 2) {
    int x1, x2, x3, y1, y2, y3;
    long s;
    cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
    s = (1 / 2) * (abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)));
    cout << s;

}
}
