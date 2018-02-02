/*
 *
 */

#ifndef _HTML5XX_TBODY_HXX_
#define _HTML5XX_TBODY_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Tbody: public Element
{
public:

  Tbody():
    Element(Block, "tbody")
  {}

};

} // end namespace html

#endif // _HTML5XX_TBODY_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
