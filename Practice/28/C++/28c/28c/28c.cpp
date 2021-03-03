<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD

#include <iostream>
using namespace std;
void prime_factorization(int n, bool repeat = true)
{
    for (int d = 2; d <= n; ++d)
    {
        int k = 0;
        int c = k + k;
        while (!(n % d))
        {
            n /= d;
            ++k;
        }
        if (repeat)
        {
            while (k--)
                c++;
                if (d == d) {
                    cout << d << "^" << c << " ";
                  
                }
                else if(d != d){
                    cout << d << "*" << c << " ";
                   
                }
                else {
                    cout << "*" << d;
                }
               // std::cout << d << " ";
            
        }
        else
        {
            if (k)
                c++;
            
                if (d != d) {
                    do{
                    cout << d << "^" << c << " ";
                    } while (c == 0);

                }
                else if (d == d) {
                    cout << d << "*" << c << " ";

                }
                else {
                    cout << "";
                }
            
            //std::cout << c << " " << d;
        }
        
    }

    std::cout << "\n";
    

}

int main()
{
    int n;
    cin >> n;
   // std::cout << n << " with repeats: \t";
    //prime_factorization(n, false);
    std::cout << n << " without repeats: \t";
    prime_factorization(n);
}

#include <iostream>
using namespace std;
void prime_factorization(int n, bool repeat = true)
{
    for (int d = 2; d <= n; ++d)
    {
        int k = 0;
        int c = k + k;
        while (!(n % d))
        {
            n /= d;
            ++k;
        }
        if (repeat)
        {
            while (k--)
                c++;
                if (d == d) {
                    cout << d << "^" << c << " ";
                  
                }
                else if(d != d){
                    cout << d << "*" << c << " ";
                   
                }
                else {
                    cout << "*" << d;
                }
               // std::cout << d << " ";
            
        }
        else
        {
            if (k)
                c++;
            
                if (d != d) {
                    do{
                    cout << d << "^" << c << " ";
                    } while (c == 0);

                }
                else if (d == d) {
                    cout << d << "*" << c << " ";

                }
                else {
                    cout << "";
                }
            
            //std::cout << c << " " << d;
        }
        
    }

    std::cout << "\n";
    

}

int main()
{
    int n;
    cin >> n;
   // std::cout << n << " with repeats: \t";
    //prime_factorization(n, false);
    std::cout << n << " without repeats: \t";
    prime_factorization(n);
}

#include <iostream>
using namespace std;
void prime_factorization(int n, bool repeat = true)
{
    for (int d = 2; d <= n; ++d)
    {
        int k = 0;
        int c = k + k;
        while (!(n % d))
        {
            n /= d;
            ++k;
        }
        if (repeat)
        {
            while (k--)
                c++;
                if (d == d) {
                    cout << d << "^" << c << " ";
                  
                }
                else if(d != d){
                    cout << d << "*" << c << " ";
                   
                }
                else {
                    cout << "*" << d;
                }
               // std::cout << d << " ";
            
        }
        else
        {
            if (k)
                c++;
            
                if (d != d) {
                    do{
                    cout << d << "^" << c << " ";
                    } while (c == 0);

                }
                else if (d == d) {
                    cout << d << "*" << c << " ";

                }
                else {
                    cout << "";
                }
            
            //std::cout << c << " " << d;
        }
        
    }

    std::cout << "\n";
    

}

int main()
{
    int n;
    cin >> n;
   // std::cout << n << " with repeats: \t";
    //prime_factorization(n, false);
    std::cout << n << " without repeats: \t";
    prime_factorization(n);
}

#include <iostream>
using namespace std;
void prime_factorization(int n, bool repeat = true)
{
    for (int d = 2; d <= n; ++d)
    {
        int k = 0;
        int c = k + k;
        while (!(n % d))
        {
            n /= d;
            ++k;
        }
        if (repeat)
        {
            while (k--)
                c++;
                if (d == d) {
                    cout << d << "^" << c << " ";
                  
                }
                else if(d != d){
                    cout << d << "*" << c << " ";
                   
                }
                else {
                    cout << "*" << d;
                }
               // std::cout << d << " ";
            
        }
        else
        {
            if (k)
                c++;
            
                if (d != d) {
                    do{
                    cout << d << "^" << c << " ";
                    } while (c == 0);

                }
                else if (d == d) {
                    cout << d << "*" << c << " ";

                }
                else {
                    cout << "";
                }
            
            //std::cout << c << " " << d;
        }
        
    }

    std::cout << "\n";
    

}

int main()
{
    int n;
    cin >> n;
   // std::cout << n << " with repeats: \t";
    //prime_factorization(n, false);
    std::cout << n << " without repeats: \t";
    prime_factorization(n);
}

>>>>>>> d92fc76f9dbe538603ac9ce7dbb4c932a85dd9f5
