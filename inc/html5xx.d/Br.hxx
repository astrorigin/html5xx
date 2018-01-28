/*
 *
 */

#ifndef _HTML5XX_BR_HXX_
#define _HTML5XX_BR_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Br: public Element
{
public:

  Br():
    Element(Inline, "br")
  {}

};

} // end namespace html

#endif // _HTML5XX_BR_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
