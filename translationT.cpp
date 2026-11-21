
#include <graphics.h>
#include <conio.h>

int main()
{
    initwindow(640, 480, "Triangle Translation");

    line(320, 0, 320, 480);
    line(0, 240, 640, 240);

    outtextxy(470, 20, "Q1");
    outtextxy(20, 20, "Q2");
    outtextxy(20, 440, "Q3");
    outtextxy(470, 440, "Q4");

    // Original
    int x[5] = {100,150,180,150,100};
    int y[5] = {100,80,120,160,150};

    for(int i = 0; i < 5; i++)
    {
        line(x[i], y[i],
             x[(i+1)%5], y[(i+1)%5]);
    }

    outtextxy(100, 60, "Original");

    // Translation Values
    int Tx = 100;
    int Ty = 70;

    // Translation Calculation
    int nx[5], ny[5];

    for(int i = 0; i < 5; i++)
    {
        nx[i] = x[i] + Tx;
        ny[i] = y[i] + Ty;
    }

    // Translated 
    for(int i = 0; i < 5; i++)
    {
        line(nx[i], ny[i],
             nx[(i+1)%5], ny[(i+1)%5]);
    }

    outtextxy(450, 100, "Translated");

    getch();
    closegraph();

    return 0;
}
