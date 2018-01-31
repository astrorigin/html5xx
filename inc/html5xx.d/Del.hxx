/*
 *
 */

#ifndef _HTML5XX_DEL_HXX_
#define _HTML5XX_DEL_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Del: public Element
{
public:

  Del():
    Element(Inline, "del")
  {}

  Del( const string& text ):
    Element(Inline, "del")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_DEL_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
