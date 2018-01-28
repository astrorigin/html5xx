/*
 *
 */

#ifndef _HTML5XX_DIV_HXX_
#define _HTML5XX_DIV_HXX_

#include "Element.hxx"

namespace html
{

class Div: public Element
{
public:

  Div():
    Element(Block, "div")
  {}

  Div( const string& id ):
    Element(Block, "div")
  {
    attr("id", id);
  }

};

} // end namespace html

#endif // _HTML5XX_DIV_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
