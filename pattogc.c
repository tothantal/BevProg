#include<stdio.h>
#include<math.h>

int write_x(x,y)
    {
    int xi,yi;

    for(xi=0;xi<x;xi++)
    {
     printf("\n");
    }

    for(yi=0;yi<y;yi++)
    {
        printf(" ");
    }

    printf("X\n");

return 0;
}

int main()
{

    int width = 90;
    int height = 25;
    long int x=0,y=0;

    while(1)
    {
    system("cls");
    write_x(abs(height - (x++ % (height * 2 ))), abs(width - (y++ % (width*2))));
    usleep(10);
    }

    return 0;
}
