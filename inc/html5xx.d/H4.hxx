/*
 *
 */

#ifndef _HTML5XX_H4_HXX_
#define _HTML5XX_H4_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class H4: public Element
{
public:

  H4():
    Element(InlineBlock, "h4")
  {}

  H4( const string& text ):
    Element(InlineBlock, "h4")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_H4_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
