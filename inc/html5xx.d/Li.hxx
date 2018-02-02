/*
 *
 */

#ifndef _HTML5XX_LI_HXX_
#define _HTML5XX_LI_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Li: public Element
{
public:

  Li():
    Element(InlineBlock, "li")
  {}

  Li( const string& text ):
    Element(InlineBlock, "li")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_LI_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
