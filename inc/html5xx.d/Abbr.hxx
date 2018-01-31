/*
 *
 */

#ifndef _HTML5XX_ABBR_HXX_
#define _HTML5XX_ABBR_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Abbr: public Element
{
public:

  Abbr():
    Element(Inline, "abbr")
  {}

  Abbr( const string& title, const string& text="" ):
    Element(Inline, "abbr")
  {
    attr("title", title);
    if (!text.empty()) {
      put(new LineElement(text));
    }
  }

};

} // end namespace html

#endif // _HTML5XX_ABBR_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
