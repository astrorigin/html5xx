/*
 *
 */

#ifndef _HTML5XX_MENUITEM_HXX_
#define _HTML5XX_MENUITEM_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Menuitem: public Element
{
public:

  Menuitem():
    Element(InlineBlock, "menuitem")
  {}

  Menuitem( const string& type ):
    Element(InlineBlock, "menuitem")
  {
    attr("type", type);
  }

};

} // end namespace html

#endif // _HTML5XX_MENUITEM_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
