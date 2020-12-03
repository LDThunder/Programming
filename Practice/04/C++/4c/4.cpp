
#include <iostream>

template<typename T>
void my_swap(T* a, T* b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a, b, c;
    std::cin >> a >> b;

    my_swap(&a, &b);

    std::cout << a << b;
}