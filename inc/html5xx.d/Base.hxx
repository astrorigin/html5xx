/*
 *
 */

#ifndef _HTML5XX_BASE_HXX_
#define _HTML5XX_BASE_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Base: public Element
{
public:

  Base():
    Element(InlineBlock, "base")
  {}

  Base( const string& href, const string& target="" ):
    Element(InlineBlock, "base")
  {
    attr("href", href);
    if (!target.empty()) {
      attr("target", target);
    }
  }

};

} // end namespace html

#endif // _HTML5XX_BASE_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
