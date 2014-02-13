#ifndef _Sn
#define _Sn

#include <sstream>
#include <vector>
#include <set>

class Sn;

class Partition; 

class Sn {
public:
  class Element;
  class Irreducible; 
  class Function;
  class FourierTransform;
  class PartialFT;
  class Ftree;
  class Association;

  Sn(const int _n);
  ~Sn();

  int order;

  Element* operator[](const int i) const; 

  Irreducible* irreducible(const Partition& p, int& index); 

  void branching(const std::vector<int>& rhos, std::vector<int>& result) const;

  std::string str();

  const int n;
  Sn* subgroup; 
  std::vector<Irreducible*> irreducibles;

};


#endif
