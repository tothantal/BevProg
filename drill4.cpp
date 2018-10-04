#include <iostream>

using namespace std;

int main()
{
    double meter;
    double sum = 0;
    string unit = "";
    double smallest;
    double largest;
    double number;
    int k = 0;
    cout << "Enter value:";
    cin >> number >> unit;
    k++;
    smallest = number;
    largest = number;
    switch(unit[0])
    {
        case 'c':
            cout << number / 100  << "m" << endl;
            meter = number / 100;

            cout << number / 2.54 << "in" << endl;

            cout << number / 2.54 / 12 << "ft" << endl;

            cout << number << "cm" << endl;
            break;


        case 'i':
            cout << number * 2.54 / 100 << "m" << endl;
            meter = number * 2.54 / 100;

            cout << number << "in" << endl;

            cout << number / 12 << "ft" << endl;

            cout << number * 2.54 << "cm" << endl;
            break;


        case 'f':
            cout << number * 2.54 / 100 << "m" << endl;
            meter = number * 2.54 / 100;

            cout << number * 12 << "in" << endl;

            cout << number << "ft" << endl;

            cout << number * 2.54 << "cm" << endl;
            break;


        case 'm':
            cout << number << "m" << endl;
            meter = number;

            cout << number * 100 / 2.54 << "in" << endl;

            cout << number / 12 << "ft" << endl;

            cout << number * 100 << "cm" << endl;
            break;


        default:
            cout << "Illegal unit!";
            break;
    }

    cout << "Largest value seen so far: " << largest << endl;
    cout << "Smallest value seen so far: " << smallest << endl;
    cout << "Number of entries: " << k << endl;
    sum = sum + meter;
    cout << "Sum of values entered: " << sum << "m" << endl;



    while(1)
    {

        cout << "Enter value:";
        cin >> number >> unit;
        k++;


    switch(unit[0])
    {
        case 'c':
            cout << number / 100  << "m" << endl;
            meter = number / 100;

            cout << number / 2.54 << "in" << endl;

            cout << number / 2.54 / 12 << "ft" << endl;

            cout << number << "cm" << endl;
            break;


        case 'i':
            cout << number * 2.54 / 100 << "m" << endl;
            meter = number * 2.54 / 100;

            cout << number << "in" << endl;

            cout << number / 12 << "ft" << endl;

            cout << number * 2.54 << "cm" << endl;
            break;


        case 'f':
            cout << number * 2.54 / 100 << "m" << endl;
            meter = number * 2.54 / 100;

            cout << number * 12 << "in" << endl;

            cout << number << "ft" << endl;

            cout << number * 2.54 << "cm" << endl;
            break;


        case 'm':
            cout << number << "m" << endl;
            meter = number;

            cout << number * 100 / 2.54 << "in" << endl;

            cout << number / 12 << "ft" << endl;

            cout << number * 100 << "cm" << endl;
            break;


        default:
            cout << "Illegal unit!";
            break;
    }

        if(number > largest)
        {
            largest = number;
        }
        else if (number < smallest)
        {
            smallest = number;
        }
        cout << "Largest value seen so far: " << largest << endl;
        cout << "Smallest value seen so far: " << smallest << endl;
        cout << "Number of entries: " << k << endl;
        sum = sum + meter;
        cout << "Sum of values entered: " << sum << "m" << endl;
    }


}
