#include "userinterface.h"
using namespace std;
int menu()
{ unsigned int answer=1;
  std::cout<<"1.Spawn unit\n2.Move unit\n3.Exit"<<endl;
  std::cin>>answer;
  return answer;  
}
