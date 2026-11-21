
#include <graphics.h>
#include <conio.h>

int main()
{
    initwindow(640, 480, "Reflection");

    line(320, 0, 320, 480);
    line(0, 240, 640, 240);

    outtextxy(470, 20, "Q1");
    outtextxy(20, 20, "Q2");
    outtextxy(20, 440, "Q3");
    outtextxy(470, 440, "Q4");

    int x[3] = {350, 400, 375};
    int y[3] = {50, 50, 100};

    int nx[3], ny[3];

    // Original 
    setcolor(WHITE);

    for(int i = 0; i < 3; i++)
    {
        line(x[i], y[i],
             x[(i+1)%3], y[(i+1)%3]);
    }

    outtextxy(350, 30, "Original");

    // X-axis Reflection
    for(int i = 0; i < 3; i++)
    {
        nx[i] = x[i];
        ny[i] = 480 - y[i];
    }

    setcolor(RED);

    for(int i = 0; i < 3; i++)
    {
        line(nx[i], ny[i],
             nx[(i+1)%3], ny[(i+1)%3]);
    }

    outtextxy(350, 355, "X Reflection");

    // Y-axis Reflection
    for(int i = 0; i < 3; i++)
    {
        nx[i] = 640 - x[i];
        ny[i] = y[i];
    }

    setcolor(GREEN);

    for(int i = 0; i < 3; i++)
    {
        line(nx[i], ny[i],
             nx[(i+1)%3], ny[(i+1)%3]);
    }

    outtextxy(215, 30, "Y Reflection");

    // Origin Reflection
    for(int i = 0; i < 3; i++)
    {
        nx[i] = 640 - x[i];
        ny[i] = 480 - y[i];
    }

    setcolor(YELLOW);

    for(int i = 0; i < 3; i++)
    {
        line(nx[i], ny[i],
             nx[(i+1)%3], ny[(i+1)%3]);
    }

    outtextxy(200, 355, "Origin Reflection");

    getch();
    closegraph();
    return 0;
}
