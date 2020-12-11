#include <iostream> 
using namespace std;
void prime_factorization(int n, bool repeat = true)
{
    for (int d = 2; d <= n; ++d) //1
    {
        int k = 0;
        int c = k + k;
        while (!(n % d)) //2
        {
            n /= d;
            ++k;
        }
        if (repeat)
        {
            while (k--)
                c++;
            if (d == d) {
                cout << d << "^" << c << " ";

            }
            else if (d != d) {
                cout << d << "*" << c << " ";

            }
            else {
                cout << "*" << d;
            }
        }
        else
        {
            if (k)
                c++;

            if (d != d) {
                do {
                    cout << d << "^" << c << " ";
                } while (c == 0);

            }
            else if (d == d) {
                cout << d << "*" << c << " ";

            }
            else {
                cout << "";
            }
        }

    }
    std::cout << "\n";
}