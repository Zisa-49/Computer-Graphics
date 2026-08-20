#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    // Flag pole
    setcolor(WHITE);
    line(150, 100, 150, 500);
    // Flag
    rectangle(150, 150, 550, 350);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(160, 160, WHITE);
    // Red Circle
    setcolor(RED);
    circle(350, 250, 70);
    // Fill red circle
    setfillstyle(SOLID_FILL, RED);
    floodfill(350, 250, RED);
    // Ground
    setcolor(GREEN);
    line(80, 500, 650, 500);
    getch();
    closegraph();
    return 0;
}