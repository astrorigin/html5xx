/*
 *
 */

#ifndef _HTML5XX_H3_HXX_
#define _HTML5XX_H3_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class H3: public Element
{
public:

  H3():
    Element(InlineBlock, "h3")
  {}

  H3( const string& text ):
    Element(InlineBlock, "h3")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_H3_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
