/*
 *
 */

#ifndef _HTML5XX_STYLE_HXX_
#define _HTML5XX_STYLE_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Style: public Element
{
public:

  Style( const string& type="text/css" ):
    Element(Block, "style")
  {
    if (!type.empty()) {
      attr("type", type);
    }
  }

};

} // end namespace html

#endif // _HTML5XX_STYLE_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
