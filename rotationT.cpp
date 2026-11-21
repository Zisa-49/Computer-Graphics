
#include <graphics.h>
#include <conio.h>
#include <math.h>

int main()
{
    initwindow(640, 480, "Rotation");

    line(320, 0, 320, 480);
    line(0, 240, 640, 240);

    outtextxy(470, 20, "Q1");
    outtextxy(20, 20, "Q2");
    outtextxy(20, 440, "Q3");
    outtextxy(470, 440, "Q4");

   
    int X[4] = {350, 400, 400, 350};
    int Y[4] = {50, 50, 100, 100};

     int x = 375, y = 75;

    float a = 45 * 3.1416 / 180;

    // Original Rectangle
    setcolor(WHITE);

    for(int i = 0; i < 4; i++)
    {
        int j = (i + 1) % 4;
        line(X[i], Y[i], X[j], Y[j]);
    }

    outtextxy(350, 30, "Original");

    // Rotation Calculation
    int nx[4], ny[4];

    for(int i = 0; i < 4; i++)
    {
        nx[i] = x + (X[i] - x) * cos(a)
                  - (Y[i] - y) * sin(a);

        ny[i] = y + (X[i] - x) * sin(a)
                  + (Y[i] - y) * cos(a);
    }

    // Rotated Rectangle
    setcolor(RED);

    for(int i = 0; i < 4; i++)
    {
        int j = (i + 1) % 4;
        line(nx[i], ny[i], nx[j], ny[j]);
    }

    outtextxy(430, 130, "Rotated");

    getch();
    closegraph();
    return 0;
}
