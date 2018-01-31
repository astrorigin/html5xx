/*
 *
 */

#ifndef _HTML5XX_INS_HXX_
#define _HTML5XX_INS_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Ins: public Element
{
public:

  Ins():
    Element(Inline, "ins")
  {}

  Ins( const string& text ):
    Element(Inline, "ins")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_INS_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
