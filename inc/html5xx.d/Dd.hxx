/*
 *
 */

#ifndef _HTML5XX_DD_HXX_
#define _HTML5XX_DD_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Dd: public Element
{
public:

  Dd():
    Element(InlineBlock, "dd")
  {}

  Dd( const string& text ):
    Element(InlineBlock, "dd")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_DD_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
