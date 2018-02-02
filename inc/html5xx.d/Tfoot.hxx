/*
 *
 */

#ifndef _HTML5XX_TFOOT_HXX_
#define _HTML5XX_TFOOT_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Tfoot: public Element
{
public:

  Tfoot():
    Element(Block, "tfoot")
  {}

};

} // end namespace html

#endif // _HTML5XX_TFOOT_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
