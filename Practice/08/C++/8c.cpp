
#include <iostream>

int main()
{
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
        printf("Summing\n", s);
        cout << u;
        break;
    case '-':
        printf("Minusing\n", s);
        cout << d;
        break;
    case '*':
        printf("Umnozhenie\n", s);
        cout << m;
        break;
    case '/':
        printf("Delenie\n", s);
        cout << t;
        break;
    default:
        printf("Stop\n");
        break;


    }
    std::cout << "Rezultat is\n";
}

