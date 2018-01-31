/*
 *
 */

#ifndef _HTML5XX_ADDRESS_HXX_
#define _HTML5XX_ADDRESS_HXX_

#include "Element.hxx"
#include "TextElement.hxx"

using namespace std;

namespace html
{

class Address: public Element
{
public:

  Address():
    Element(Block, "address")
  {}

  Address( const string& text ):
    Element(Block, "address")
  {
    put(new TextElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_ADDRESS_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
