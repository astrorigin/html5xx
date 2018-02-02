/*
 *
 */

#ifndef _HTML5XX_U_HXX_
#define _HTML5XX_U_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class U: public Element
{
public:

  U():
    Element(Inline, "u")
  {}

  U( const string& text ):
    Element(Inline, "u")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_U_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
