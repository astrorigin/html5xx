/*
 *
 */

#ifndef _HTML5XX_CODE_HXX_
#define _HTML5XX_CODE_HXX_

#include "Element.hxx"
#include "TextElement.hxx"

using namespace std;

namespace html
{

class Code: public Element
{
public:

  Code():
    Element(Block, "code")
  {}

  Code( const string& text ):
    Element(Block, "code")
  {
    put(new TextElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_CODE_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
