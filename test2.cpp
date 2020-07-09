#include <iostream>

using namespace std;

int main()
{

    int a = 1, b = 2, sum = 0;

    for (int i = 0; i <= 10; i++)
    {
        sum += a + b;
        cout << sum << endl;
    }
}