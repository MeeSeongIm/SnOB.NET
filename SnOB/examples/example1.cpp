#include "IElement.hpp"
#include <iostream>

main(){

  SnElement p1(1,2,4,3,5,NULL);
  SnElement p2(2,3,1,4,5,NULL);

  SnElement* a=p2*p1;
  SnElement* b=p2.inverse();
  SnElement* c=(*b)*p1;
  
  cout<<"p1          : "<<p1.str()<<endl;
  cout<<"p2          : "<<p2.str()<<endl;
  cout<<"p2*p1       : "<<a->str()<<endl;
  cout<<"p2^{-1}     : "<<b->str()<<endl;
  cout<<"(p2^{-1})*p1: "<<c->str()<<endl;
  
  delete a,b,c;
}
