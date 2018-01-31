/*
 *
 */

#ifndef _HTML5XX_COLGROUP_HXX_
#define _HTML5XX_COLGROUP_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Colgroup: public Element
{
public:

  Colgroup():
    Element(Block, "colgroup")
  {}

};

} // end namespace html

#endif // _HTML5XX_COLGROUP_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
