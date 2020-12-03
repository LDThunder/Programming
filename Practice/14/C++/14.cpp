#include <iostream>
int main()
{
    using namespace std;
    int  n, q, w;
    w = -1;
    q = 1;
    cin >> n;
    do { if(n >= q)
        w += 1;
        q *= 2;
    } while (n >= q);
    cout << w;

}
