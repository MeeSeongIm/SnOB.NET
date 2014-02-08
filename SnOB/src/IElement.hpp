/* -----------------------------------------------------------------------------

  SnOB - An FFT toolkit for the symmetric group
              development version

  Copyright (C) 2006  Imre Risi Kondor


  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the 

  Free Software Foundation, Inc., 
  51 Franklin Street, Fifth Floor, 
  Boston, MA  02110-1301, USA.

  This software is provided for educational and research purposes. 
  Commercial use is prohibited. 

  See the accompanying LICENSE for details

----------------------------------------------------------------------------- */


#ifndef _IElement
#define _IElement

#include <vector>
#include <iostream>

using namespace std;

class IElement {
public:
  virtual ~IElement() {}
  virtual bool operator==(const IElement& o) = 0;
  virtual int action(const int i) const = 0;
  virtual int iaction(const int i) const = 0;
  virtual vector<int> effect() const = 0;
  virtual vector<int> ieffect() const =0;
  virtual IElement* operator*(const IElement& o) const = 0;
  virtual IElement* inverse() = 0;
  virtual IElement& CcycleL(int j, int q) = 0;
  virtual IElement& CcycleR(int j, int q) = 0;
  virtual string str() const = 0;
  virtual int GetN() const = 0;
};

#endif
