#ifndef _Sn
#define _Sn

#include <sstream>
#include <vector>
#include <set>

#include "SnElement.hpp"

class Partition; 

class Sn {
public:
  class Irreducible; 
  class Function;
  class FourierTransform;
  class PartialFT;
  class Ftree;
  class Association;

  Sn(const int _n);
  ~Sn();

  int order;

  SnElement* operator[](const int i) const;

  Irreducible* irreducible(const Partition& p, int& index); 

  void branching(const std::vector<int>& rhos, std::vector<int>& result) const;

  std::string str();

  const int n;
  Sn* subgroup; 
  std::vector<Irreducible*> irreducibles;

};


#endif
