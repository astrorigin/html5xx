/*
 *
 */

#ifndef _HTML5XX_SMALL_HXX_
#define _HTML5XX_SMALL_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Small: public Element
{
public:

  Small():
    Element(Inline, "small")
  {}

};

} // end namespace html

#endif // _HTML5XX_SMALL_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
