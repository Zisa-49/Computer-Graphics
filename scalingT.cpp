
#include <graphics.h>
#include <conio.h>

int main()
{
    initwindow(640, 480, "Scaling");

    line(320, 0, 320, 480);
    line(0, 240, 640, 240);

    outtextxy(470, 20, "Q1");
    outtextxy(20, 20, "Q2");
    outtextxy(20, 440, "Q3");
    outtextxy(470, 440, "Q4");

    int x[3] = {350, 400, 375};
    int y[3] = {50, 50, 100};

    float sx = 2, sy = 2;

    // Original Triangle
    setcolor(WHITE);

    for(int i = 0; i < 3; i++)
    {
        line(x[i], y[i],
             x[(i+1)%3], y[(i+1)%3]);
    }

    outtextxy(350, 30, "Original");

    // Scaling Calculation
    int nx[3], ny[3];

    for(int i = 0; i < 3; i++)
    {
        nx[i] = 350 + (x[i] - 350) * sx;
        ny[i] = 50 + (y[i] - 50) * sy;
    }

    // Scaled Triangle
    setcolor(RED);

    for(int i = 0; i < 3; i++)
    {
        line(nx[i], ny[i],
             nx[(i+1)%3], ny[(i+1)%3]);
    }

    outtextxy(430, 30, "Scaled");

    getch();
    closegraph();
    return 0;
}
