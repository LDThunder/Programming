
#include <iostream>

int main()
{
    using namespace std;
    int a, b, c;
    long D, d, x1, x2, x;
    std::cin >> a >> b >> c;
    D = (b * b) - (4 * a * c);
    d = sqrt(D);
    x = (-1 * b) / (2 * a);
    x1 = (-1 * b + d) / (2 * a);
    x2 = (-1 * b - d) / (2 * a);
    if (D > 0)
        cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
    else if (D == 0)
        cout << x << endl;
    else if (D < 0)
        return 0;
}

