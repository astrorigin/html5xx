/*
 *
 */

#ifndef _HTML5XX_I_HXX_
#define _HTML5XX_I_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class I: public Element
{
public:

  I():
    Element(Inline, "i")
  {}

  I( const string& text ):
    Element(Inline, "i")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_I_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
