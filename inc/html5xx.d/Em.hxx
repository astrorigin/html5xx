/*
 *
 */

#ifndef _HTML5XX_EM_HXX_
#define _HTML5XX_EM_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Em: public Element
{
public:

  Em():
    Element(Inline, "em")
  {}

  Em( const string& text ):
    Element(Inline, "em")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_EM_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
