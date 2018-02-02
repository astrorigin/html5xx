/*
 *
 */

#ifndef _HTML5XX_MENU_HXX_
#define _HTML5XX_MENU_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Menu: public Element
{
public:

  Menu():
    Element(Block, "menu")
  {}

  Menu( const string& type ):
    Element(Block, "menu")
  {
    attr("type", type);
  }

};

} // end namespace html

#endif // _HTML5XX_MENU_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
