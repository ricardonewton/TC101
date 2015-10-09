#include <iostream>
using namespace std;
long superpower(long x, long y)
{
  long number=1;
  long z;
  for(z=0 ; z<y; z++)
  {
    number *=x;
  }
return number;
}
int main(){
  int q;
  int w;

  cin>>q;
  cin>>w;
  cout<<superpower(q,w);}
  return 0;
}
