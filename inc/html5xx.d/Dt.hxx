/*
 *
 */

#ifndef _HTML5XX_DT_HXX_
#define _HTML5XX_DT_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Dt: public Element
{
public:

  Dt():
    Element(InlineBlock, "dt")
  {}

  Dt( const string& text ):
    Element(InlineBlock, "dt")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_DT_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
