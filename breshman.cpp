#include <iostream>
#include <graphics.h>
#include <cstdlib>
using namespace std;
void drawLine(int x1, int y1, int x2, int y2, int cx, int cy)
{
    int dx = x2 - x1;
    int dy = y2 - y1;
    // Initial decision parameter
    int p = 2 * dy - dx;
    int x = x1;
    int y = y1;
    while (x <= x2)
    {
        // Mathematical coordinate -> Screen coordinate
        putpixel(cx + x, cy - y, WHITE);
        // Case 1: P < 0
        if (p < 0)
        {
            x = x + 1;
            p = p + 2 * dy;
        }
        // Case 2: P >= 0
        else
        {
            x = x + 1;
            y = y + 1;
            p = p + 2 * dy - 2 * dx;
        }
    }
}
int main()
{
    int x1, y1, x2, y2;
    cout << "Enter x1 y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2 y2: ";
    cin >> x2 >> y2;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    // Center of graphics window
    int cx = getmaxx() / 2;
    int cy = getmaxy() / 2;
    // X-axis
    line(0, cy, getmaxx(), cy);
    // Y-axis
    line(cx, 0, cx, getmaxy());
    // Draw Bresenham line
    drawLine(x1, y1, x2, y2, cx, cy);
    getch();
    closegraph();
    return 0;
}
