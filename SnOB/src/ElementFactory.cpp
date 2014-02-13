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

#include "ElementFactory.hpp"
#include "SnElement.hpp"

IElement* ElementFactory::Get(const int n) { return new SnElement(n); }
IElement* ElementFactory::GetAs(int a1, ...) {
	va_list params;
	va_start(params, a1);
	return new SnElement(a1, params);
}
IElement* ElementFactory::Get(const int _n, int* v) { return new SnElement(_n, v);}
IElement* ElementFactory::Get(const int _n, const vector<int> fixed) { return new SnElement(_n, fixed); }
IElement* ElementFactory::Get(const vector<int>& factorization, const int _n) { return new SnElement(factorization, _n); }
IElement* ElementFactory::Get(const IElement& o) { return new SnElement(o); }
