#include <iostream> 
using namespace std;
int main()
{
    setlocale(0, "");
    {int a, b;
    cout << "������� ������ �����: ";
    cin >> a;
    cout << "������� ������ �����: ";
    cin >> b;
    int q = a + b;
    int w = a - b;
    int e = a * b;
    int r = a / b;
    cout << "�����= " << q << endl;
    cout << "��������= " << w << endl;
    cout << "������������= " << e << endl;
    cout << "�������= " << r << endl;
    }
    { double a, b;
        cout << "������� ������ ����� double: ";
        cin >> a;
        cout << "������� ������ ����� double: ";
        cin >> b;
        double q = a + b;
        double w = a - b;
        double e = a * b;
        double r = a / b;
        cout << "�����= " << q << endl;
        cout << "��������= " << w << endl;
        cout << "������������= " << e << endl;
        cout << "�������= " << r << endl;
        }
    {
            int a;
            double b;
            cout << "������� ������ ����� int: ";
            cin >> a;
            cout << "������� ������ ����� double: ";
            cin >> b;
            double q = a + b;
            double w = a - b;
            double e = a * b;
            double r = a / b;
            cout << "�����= " << q << endl;
            cout << "��������= " << w << endl;
            cout << "������������= " << e << endl;
            cout << "�������= " << r << endl;
        }
    {
        double a;
        int b;
        cout << "������� ������ ����� double: ";
        cin >> a;
        cout << "������� ������ ����� int: ";
        cin >> b;
        double q = a + b;
        double w = a - b;
        double e = a * b;
        double r = a / b;
        cout << "�����= " << q << endl;
        cout << "��������= " << w << endl;
        cout << "������������= " << e << endl;
        cout << "�������= " << r << endl;
        return 0;
    }
}