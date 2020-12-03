#include <iostream>
using namespace std;
int one(int h, int k) {
    cin >> h;
    cin >> k;
    if ((h == 0) || (h == k)) {
        cout << 1;
    }
    else return one(h, k - 1) + one(h - 1, k - 1);
}