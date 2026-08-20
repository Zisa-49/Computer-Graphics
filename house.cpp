#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    // House Body
    setcolor(WHITE);
    rectangle(200, 250, 500, 500);
    // Roof
    line(200, 250, 350, 120);
    line(350, 120, 500, 250);
    line(200, 250, 500, 250);
    // Fill House Body
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(250, 300, WHITE);
    // Fill Roof
    setfillstyle(SOLID_FILL, RED);
    floodfill(350, 180, WHITE);
    // Door
    setcolor(WHITE);
    rectangle(320, 380, 390, 500);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(330, 400, WHITE);
    // Left Window
    rectangle(230, 300, 290, 360);
    setfillstyle(SOLID_FILL, CYAN);
    floodfill(240, 310, WHITE);
    // Window Cross
    line(260, 300, 260, 360);
    line(230, 330, 290, 330);
    // Right Window
    rectangle(410, 300, 470, 360);
    setfillstyle(SOLID_FILL, CYAN);
    floodfill(420, 310, WHITE);
    // Window Cross
    line(440, 300, 440, 360);
    line(410, 330, 470, 330);
    // Door Knob
    setcolor(YELLOW);
    circle(375, 440, 5);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(375, 440, YELLOW);
    // Ground
    setcolor(GREEN);
    line(100, 500, 600, 500);
    getch();
    closegraph();
    return 0;
}