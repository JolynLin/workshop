#include <iostream>
using namespace std;
int main()
{ int x, y;
for(x=1;x<=8;x+=2)
for(y=x;y<=10;y+=3)
cout<<"\nx = " <<x << " y = "<<y;
return 0;
}