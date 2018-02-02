/*
 *
 */

#ifndef _HTML5XX_S_HXX_
#define _HTML5XX_S_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class S: public Element
{
public:

  S():
    Element(Inline, "s")
  {}

  S( const string& text ):
    Element(Inline, "s")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_S_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
