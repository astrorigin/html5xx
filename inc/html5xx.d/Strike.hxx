/*
 *
 */

#ifndef _HTML5XX_STRIKE_HXX_
#define _HTML5XX_STRIKE_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Strike: public Element
{
public:

  Strike():
    Element(Inline, "strike")
  {}

  Strike( const string& text ):
    Element(Inline, "strike")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_STRIKE_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
