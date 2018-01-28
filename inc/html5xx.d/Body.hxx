/*
 *
 */

#ifndef _HTML5XX_BODY_HXX_
#define _HTML5XX_BODY_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Body: public Element
{
public:

  Body():
    Element(Block, "body")
  {}

};

} // end namespace html

#endif // _HTML5XX_BODY_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
