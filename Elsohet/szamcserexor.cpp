#include <iostream>
using namespace std;

int main(void)
{
    int a,b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "a = " << a << " b = " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "a = " << a << " b = " << b;
    return 0;
}
