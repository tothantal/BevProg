#include "std_lib_facilities.h"

//változók cseréje különbséggel

int main()
{
    int a, b;
    cout << " a = ";
    cin >> a;
    cout << " b = ";
    cin >> b;
    a = a * b;
    b = a / b;
    a = a / b;
    cout << "a = " << a << " b = " << b;
}
