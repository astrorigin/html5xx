/*
 *
 */

#ifndef _HTML5XX_P_HXX_
#define _HTML5XX_P_HXX_

#include "Element.hxx"
#include "TextElement.hxx"

using namespace std;

namespace html
{

class P: public Element
{
public:

  P():
    Element(Block, "p")
  {}

  P( const string& text ):
    Element(Block, "p")
  {
    put(new TextElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_P_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
