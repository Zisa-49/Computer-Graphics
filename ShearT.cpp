
#include <graphics.h>
#include <conio.h>

int main()
{
    initwindow(640, 480, "Shearing");

    line(320, 0, 320, 480);
    line(0, 240, 640, 240);

    outtextxy(470, 20, "Q1");
    outtextxy(20, 20, "Q2");
    outtextxy(20, 440, "Q3");
    outtextxy(470, 440, "Q4");

    int n = 4;

    // Original Shape
    int x[10] = {320, 410, 410, 320};
    int y[10] = {150, 150, 240, 240};

    int nx[10], ny[10];

    float shx = 0.5;
    float shy = 0;

    // Original
    setcolor(WHITE);

    for(int i = 0; i < n; i++)
    {
        line(x[i], y[i],
             x[(i+1)%n], y[(i+1)%n]);
    }

    outtextxy(330, 120, "Original");

    // Shearing Calculation
    for(int i = 0; i < n; i++)
    {
        nx[i] = x[i] + shx * (y[i] - 240);
        ny[i] = y[i] + shy * (x[i] - 320);
    }

    // Sheared Shape
    setcolor(YELLOW);

    for(int i = 0; i < n; i++)
    {
        line(nx[i], ny[i],
             nx[(i+1)%n], ny[(i+1)%n]);
    }

    outtextxy(440, 120, "Sheared");

    getch();
    closegraph();

    return 0;
}
