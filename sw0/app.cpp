#include "app.h"

void spawn (Unit* a)
{
 a->xpos = 0;
 a->ypos = 0;   
}
void move (Unit* a)
{
  cin>>a->xpos;
  cin>>a->ypos;    
}
int AppRun()
{
  int action=0;
  Unit a;   
  while(action!=3)
    {
   action=menu();            
  switch(action)
     {
      case 1:
           spawn(&a);
           break;          
      case 2:
           move(&a);
           break;          
      case 3:         
           break;
     }
  }
  return 0;
}
