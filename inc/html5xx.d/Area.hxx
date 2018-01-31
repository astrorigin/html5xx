/*
 *
 */

#ifndef _HTML5XX_AREA_HXX_
#define _HTML5XX_AREA_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Area: public Element
{
public:

  Area():
    Element(InlineBlock, "area")
  {}

  Area( const string& shape, const string& coords,
        const string& href, const string& alt="" ):
    Element(InlineBlock, "area")
  {
    attr("shape", shape);
    attr("coords", coords);
    attr("href", href);
    if (!alt.empty()) {
      attr("alt", alt);
    }
  }

};

} // end namespace html

#endif // _HTML5XX_AREA_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
