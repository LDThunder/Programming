
#include <iostream>

int main()
{
	using namespace std;
	int h, m;
	int H, M;
	cout << "Vremia i mesto\n";
	cin >> h >> m;
	cout << "Dlya vtorogo\n";
	cin >> H >> M;



	if ((0 <= h) && (H <= 23))
	{
	
	}
	else
	{
		cout << " vremya ne sovpodaet\n" << endl;
	}
	if ((0 <= m) && (M <= 59))
	{

	}
	else
	{
		cout << "Minuti ne sovpadaut\n" << endl;
	}


	int a = h;
	int A = H;
	int b = m;
	int B = M;
	int c = b + 15;

	if (a = A, c <= B)
	{
		cout << "Vstrecha sostoitsa" << endl;
	}
	else
	{
		cout << "Vstrecha ne sostoica,zhal" << endl;
	}





}