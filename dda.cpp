#include <iostream>
#include <graphics.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int x1, y1, x2, y2;
    cout << "Enter starting point x1 y1: ";
    cin >> x1 >> y1;
    cout << "Enter ending point x2 y2: ";
    cin >> x2 >> y2;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    // Window center = (0,0)
    int cx = getmaxx() / 2;
    int cy = getmaxy() / 2;
    // Draw X-axis
    line(0, cy, getmaxx(), cy);
    // Draw Y-axis
    line(cx, 0, cx, getmaxy());
    // DDA Line Drawing Algorithm
    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps = max(abs(dx), abs(dy));
    float x = x1;
    float y = y1;
    float xinc = (float)dx / steps;
    float yinc = (float)dy / steps;
    for (int i = 0; i <= steps; i++)
    {
        // Convert Cartesian coordinate
        // to screen coordinate
        int screenX = cx + round(x);
        int screenY = cy - round(y);
        putpixel(screenX, screenY, WHITE);
        x += xinc;
        y += yinc;
    }
    getch();
    closegraph();
    return 0;
}