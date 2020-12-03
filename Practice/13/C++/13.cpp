#include <iostream>
int main()
{
    setlocale(LC_ALL, "Russian");
    using namespace std;
    int a, b, w, d, e, n, i;
    w = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            w = w + 1;
            cout << n % i << endl;
        }
    }
    cout << w;
    if (w != 2)
        cout << " Не простое " << endl << w << endl;
        
    else cout << "Простое" << endl;
}
