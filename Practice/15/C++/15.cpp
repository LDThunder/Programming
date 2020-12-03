#include <iostream>
#include <windows.h>
#include<time.h>
#include <string>
using namespace std;
void main()
{
    {
        setlocale(LC_ALL, "Russian");
        srand(unsigned(time(NULL)));
        int r, b, i, a;
        char c;
        r = rand() % 100 + 1;
        cout << "Число загаданно\n";
        for (i = 1; i < 4; i++)
        {
            cin >> b;
            if (b == r)
            {
                cout << "Поздравляем,вы угадали число!\n";
                break;
            }
            if (b > r)
            {
                cout << "Число больше загаданного\n";
                
            }
            if (b < r)
            {
                cout << "Число меньше загаданного\n";
                
            }
        }
        if (i == 4)
        {
            cout << "Ю луз\n";  
            
        }
    }
    


    
    
        


}