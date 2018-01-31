/*
 *
 */

#ifndef _HTML5XX_BUTTON_HXX_
#define _HTML5XX_BUTTON_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Button: public Element
{
public:

  Button():
    Element(InlineBlock, "button")
  {}

  Button( const string& type ):
    Element(InlineBlock, "button")
  {
    attr("type", type);
  }

};

} // end namespace html

#endif // _HTML5XX_BUTTON_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
