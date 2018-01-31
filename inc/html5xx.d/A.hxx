/*
 *
 */

#ifndef _HTML5XX_A_HXX_
#define _HTML5XX_A_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class A: public Element
{
public:

  A():
    Element(Inline, "a")
  {}

  A( const string& href, const string& text="" ):
    Element(Inline, "a")
  {
    attr("href", href);
    if (!text.empty()) {
      put(new LineElement(text));
    }
  }

};

} // end namespace html

#endif // _HTML5XX_A_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
