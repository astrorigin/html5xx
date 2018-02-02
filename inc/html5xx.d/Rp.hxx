/*
 *
 */

#ifndef _HTML5XX_RP_HXX_
#define _HTML5XX_RP_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Rp: public Element
{
public:

  Rp():
    Element(Inline, "rp")
  {}

  Rp( const string& text ):
    Element(Inline, "rp")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_RP_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
