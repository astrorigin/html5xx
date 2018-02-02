/*
 *
 */

#ifndef _HTML5XX_NAV_HXX_
#define _HTML5XX_NAV_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Nav: public Element
{
public:

  Nav():
    Element(Block, "nav")
  {}

};

} // end namespace html

#endif // _HTML5XX_NAV_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
