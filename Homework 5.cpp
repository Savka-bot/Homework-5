#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "rus");

    //........................................
    cout << " Найти сумму цифр в числе" << endl;
    cout << "Введите число - ";


    int n, sum = 0;
    cin >> n;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << "sum = " << sum << endl;
    //........................................

    //........................................


    return 0;
}

