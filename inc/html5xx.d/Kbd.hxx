/*
 *
 */

#ifndef _HTML5XX_KBD_HXX_
#define _HTML5XX_KBD_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Kbd: public Element
{
public:

  Kbd():
    Element(Inline, "kbd")
  {}

  Kbd( const string& text ):
    Element(Inline, "kbd")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_KBD_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
