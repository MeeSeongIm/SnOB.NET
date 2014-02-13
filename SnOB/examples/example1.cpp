#include "IElement.hpp"
#include "ElementFactory.hpp"

#include <iostream>

main(){

	IElement& p1 = ElementFactory::GetAs(1,2,4,3,5,NULL);
	IElement& p2 = ElementFactory::GetAs(2,3,1,4,5,NULL);

	IElement* a=p2*p1;
	IElement* b=p2.inverse();
	IElement* c=(*b)*p1;

	cout<<"p1          : "<<p1.str()<<endl;
	cout<<"p2          : "<<p2.str()<<endl;
	cout<<"p2*p1       : "<<a->str()<<endl;
	cout<<"p2^{-1}     : "<<b->str()<<endl;
	cout<<"(p2^{-1})*p1: "<<c->str()<<endl;

	delete a,b,c;
}
