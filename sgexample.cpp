#include "sgfunc.h"
int main()
{
  sgCreateWindow(800, 600);
  selectPen(255, 0, 0, 5);
  drawLine(10, 10, 100, 100);

  while(!GetAsyncKeyState(VK_ESCAPE) && sgGetMouseButtons() != 2)
  {
     Sleep(10);
  }

}
