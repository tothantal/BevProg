#include "std_lib_facilities.h"

int main()
{
    cout << "Enter the name of the person you want to write to:\n";
    string first_name;
    cin >> first_name;
    cout << "Enter the name of anopther friend:\n";
    string friend_name;
    cin >> friend_name;
    char friend_sex = 0;
    cout << "Enter the gender of your friend (m/f):\n";
    cin >> friend_sex;
    cout << "Enter the age of the recipient:\n";
    int age;
    cin >> age;
    if(age <=0|| age>= 110)
    {
        simple_error("You're kidding!");
    }
    cout << "Dear " << first_name << ",\n";
    cout << "\tHow are you? I am fine. I miss you.\n";
    cout << "Have you seen " << friend_name << " lately?\n";
    if(friend_sex == 'm')
    {
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    }
    if(friend_sex == 'f')
    {
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    }
    cout << "I hear you just had a birthday and you are " << age << " years old.\n";
    if(age < 12)
    {
        cout << "Next year you will be " << age + 1 << " years old.";
    }
    if(age == 17)
    {
        cout << "Next year you will be able to vote.";
    }
    if(age > 70)
    {
        cout << "I hope you are enjoying your retirement.\n";
    }
    cout << "Yours sincerely, __";
}
