#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int a;
	a = 2;
	cout << "Результат выражения 2+2*2 = " << a + a * a;
	return 0;
}