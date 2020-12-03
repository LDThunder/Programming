#include <iostream>
#include <longn.h>
#include <cream.h>
#include <one.h>

int n, h, l, k;
long factn;
double r, x;
using namespace std;

long fact(long factn) {
    if (factn < 1)
        return 1;
    else return fact(factn -= 1) * n;
}

double cream(double x, double r, int i) {
    r = 0.0;
    i = 1;
    do {
        r += n;
        n *= -1 * x * x / ((2 * i) * (2 * i + 1));
        i++;
    } while ((n > 0.0 ? n : n) > 1E-10);
    cout << r; return r;

}

int one(int h, int k) {
    cin >> h;
    cin >> k;
    if ((h == 0) || (h == k)) {
        cout << 1;
    }
    else return one(h, k - 1) + one(h - 1, k - 1);
}

int main()
{
    cin >> n;
    cin >> r;
    cin >> l;
    cout << fact(n) << endl;
    cout << cream(r) << endl;
    cout << one(l) << endl;
}
