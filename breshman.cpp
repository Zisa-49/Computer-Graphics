#include <iostream>
#include <graphics.h>
#include <cstdlib>
using namespace std;
void drawLine(int x0, int y0, int x1, int y1, int cx, int cy)
{
    int dx = abs(x1 - x0);
    int dy = abs(y1 - y0);
    int sx = (x0 < x1) ? 1 : -1;
    int sy = (y0 < y1) ? 1 : -1;
    int err = dx - dy;
    while (true)
    {
        // Mathematical coordinate → screen coordinate
        putpixel(cx + x0, cy - y0, WHITE);
        if (x0 == x1 && y0 == y1)
            break;
        int e = 2 * err;
        if (e > -dy)
        {
            err = err - dy;
            x0 = x0 + sx;
        }
        if (e < dx)
        {
            err = err + dx;
            y0 = y0 + sy;
        }
    }
}
int main()
{
    int x0, y0, x1, y1;
    // 4 inputs
    cout << "Enter x0 y0: ";
    cin >> x0 >> y0;
    cout << "Enter x1 y1: ";
    cin >> x1 >> y1;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    // Center of window
    int cx = getmaxx() / 2;
    int cy = getmaxy() / 2;
    // X-axis
    line(0, cy, getmaxx(), cy);
    // Y-axis
    line(cx, 0, cx, getmaxy());
    // Bresenham line
    drawLine(x0, y0, x1, y1, cx, cy);
    getch();
    closegraph();
    return 0;
}