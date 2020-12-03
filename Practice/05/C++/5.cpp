
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int x0, v0, t, xt;
    std::cin >> x0;
    std::cin >> v0;
    std::cin >> t;
    xt = x0 + (v0 * t) + ((9.8 * t * t) / 2);
    std::cout << abs(xt - x0);
}