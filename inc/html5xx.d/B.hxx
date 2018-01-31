/*
 *
 */

#ifndef _HTML5XX_B_HXX_
#define _HTML5XX_B_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class B: public Element
{
public:

  B():
    Element(Inline, "b")
  {}

  B( const string& text ):
    Element(Inline, "b")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_B_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
