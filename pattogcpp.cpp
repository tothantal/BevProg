#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int write_x(int x,int y)
    {
    int xi,yi;

    for(xi=0; xi<x; xi++)
    {
     cout << "\n";
    }

    for(yi=0; yi<y; yi++)
    {
     cout << " ";
    }

     cout << "X\n";

return 0;
}

int main()
{

    int width = 90;
    int height = 25;
    int x=0,y=0;

    while(1)
    {
        system("cls");
        write_x(abs(height - (x++ % (height * 2 ))), abs(width - (y++ % (width*2))));
    }

    return 0;
}
