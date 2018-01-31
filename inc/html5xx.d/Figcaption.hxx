/*
 *
 */

#ifndef _HTML5XX_FIGCAPTION_HXX_
#define _HTML5XX_FIGCAPTION_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Figcaption: public Element
{
public:

  Figcaption():
    Element(InlineBlock, "figcaption")
  {}

  Figcaption( const string& text ):
    Element(InlineBlock, "figcaption")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_FIGCAPTION_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
