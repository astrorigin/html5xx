/*
 *
 */

#ifndef _HTML5XX_SPAN_HXX_
#define _HTML5XX_SPAN_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Span: public Element
{
public:

  Span():
    Element(Inline, "span")
  {}

  Span( const string& text ):
    Element(Inline, "span")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_SPAN_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
