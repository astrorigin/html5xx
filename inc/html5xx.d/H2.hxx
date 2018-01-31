/*
 *
 */

#ifndef _HTML5XX_H2_HXX_
#define _HTML5XX_H2_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class H2: public Element
{
public:

  H2():
    Element(InlineBlock, "h2")
  {}

  H2( const string& text ):
    Element(InlineBlock, "h2")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_H2_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
