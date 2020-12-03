#include <iostream>
int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;
	int h, m;
	int H, M;
	cout << "Времея первого\n";
	cin >> h >> m;
	cout << "Время второго\n";
	cin >> H >> M;
	if ((0 <= h) && (H <= 23))
	{
	
	}
	else
	{
		cout << "Время введено неправильно\n" << endl;
	}
	if ((0 <= m) && (M <= 59))
	{

	}
	else
	{
		cout << "Время введено неправильно\n" << endl;
	}
	int a = h;
	int A = H;
	int b = m;
	int B = M;
	int c = b + 15;
	if (a = A, c <= B)
	{
		cout << "Встреча состоится" << endl;
	}
	else
	{
		cout << "Встреча не состоится" << endl;
	}





}




