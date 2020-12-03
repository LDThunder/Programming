#include <iostream>
using namespace std;
int main()
{
	int i, n, q;
	cin >> n >> q; 
	for (i = 1; i <= n - 1; i++)
		q *= 2;
	cout << q;


	return 0;
}
