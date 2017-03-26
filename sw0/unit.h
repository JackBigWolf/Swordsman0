#ifndef unit_h
#define unit_h

using namespace std;

class Unit
{
 static int maxunits;
 public:
 Unit(int x=-20,int y=-20)
 {
  xpos=x;
  ypos=y;        
 } 
 ~Unit()
 {
  delete this;      
 } 
 friend void move(Unit* a);
 friend void spawn(Unit* a);
 private:
         
 bool death;
 int maxhealth;
 int currenthealth;
 int maxstamina;
 int maxmana;
 int lvl;
 int uppoints;
 int xpos;
 int ypos;      
     
};
#endif
