/*
 *
 */

#ifndef _HTML5XX_LEGEND_HXX_
#define _HTML5XX_LEGEND_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Legend: public Element
{
public:

  Legend():
    Element(InlineBlock, "legend")
  {}

  Legend( const string& text ):
    Element(InlineBlock, "legend")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_LEGEND_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
