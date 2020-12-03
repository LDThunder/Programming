#include <iostream>
#include <conio.h>
int fact(int i) {
    if (i == 0)
        return 1;
    else return i*fact(i-1);
}

int main()
{
    int i, n;
    std::cin >> n;
    std::cout << fact(n);
}
