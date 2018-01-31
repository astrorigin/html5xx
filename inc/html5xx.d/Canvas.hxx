/*
 *
 */

#ifndef _HTML5XX_CANVAS_HXX_
#define _HTML5XX_CANVAS_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Canvas: public Element
{
public:

  Canvas():
    Element(Block, "canvas")
  {}

  Canvas( int height, int width ):
    Element(Block, "canvas")
  {
    attr("height", to_string(height));
    attr("width", to_string(width));
  }

};

} // end namespace html

#endif // _HTML5XX_CANVAS_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
