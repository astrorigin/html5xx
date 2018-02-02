/*
 *
 */

#ifndef _HTML5XX_STRONG_HXX_
#define _HTML5XX_STRONG_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Strong: public Element
{
public:

  Strong():
    Element(Inline, "strong")
  {}

  Strong( const string& text ):
    Element(Inline, "strong")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_STRONG_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
