/*
 *
 */

#ifndef _HTML5XX_ASIDE_HXX_
#define _HTML5XX_ASIDE_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Aside: public Element
{
public:

  Aside():
    Element(Block, "aside")
  {}

};

} // end namespace html

#endif // _HTML5XX_ASIDE_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
