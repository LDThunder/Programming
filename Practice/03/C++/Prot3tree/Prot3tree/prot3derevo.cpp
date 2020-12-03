#include <iostream> 
using namespace std;
int main()
{
    setlocale(0, "");
    {int a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    int q = a + b;
    int w = a - b;
    int e = a * b;
    int r = a / b;
    cout << "Сумма= " << q << endl;
    cout << "Разность= " << w << endl;
    cout << "Произведение= " << e << endl;
    cout << "Частное= " << r << endl;
    }
    { double a, b;
        cout << "Введите первое число double: ";
        cin >> a;
        cout << "Введите второе число double: ";
        cin >> b;
        double q = a + b;
        double w = a - b;
        double e = a * b;
        double r = a / b;
        cout << "Сумма= " << q << endl;
        cout << "Разность= " << w << endl;
        cout << "Произведение= " << e << endl;
        cout << "Частное= " << r << endl;
        }
    {
            int a;
            double b;
            cout << "Введите первое число int: ";
            cin >> a;
            cout << "Введите второе число double: ";
            cin >> b;
            double q = a + b;
            double w = a - b;
            double e = a * b;
            double r = a / b;
            cout << "Сумма= " << q << endl;
            cout << "Разность= " << w << endl;
            cout << "Произведение= " << e << endl;
            cout << "Частное= " << r << endl;
        }
    {
        double a;
        int b;
        cout << "Введите первое число double: ";
        cin >> a;
        cout << "Введите второе число int: ";
        cin >> b;
        double q = a + b;
        double w = a - b;
        double e = a * b;
        double r = a / b;
        cout << "Сумма= " << q << endl;
        cout << "Разность= " << w << endl;
        cout << "Произведение= " << e << endl;
        cout << "Частное= " << r << endl;
        return 0;
    }
}