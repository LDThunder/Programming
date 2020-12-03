#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    using namespace std;
    int a, b;
    char s;
    long m, u, d, t;
    cin >> a >> b;
    cin >> s;
    u = a + b;
    d = a - b;
    m = a * b;
    t = a / b;
    switch (s) {
    case '+':
        printf("Сумма\n", s);
        cout << u;
        break;
    case '-':
        printf("Разность\n", s);
        cout << d;
        break;
    case '*':
        printf("Произведение\n", s);
        cout << m;
        break;
    case '/':
        printf("Частное\n", s);
        cout << t;
        break;
    default:
        printf("Стоп\n");
        break;


    }
    std::cout << "Результат\n";
}




