/*
 *
 */

#ifndef _HTML5XX_TH_HXX_
#define _HTML5XX_TH_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Th: public Element
{
public:

  Th():
    Element(InlineBlock, "th")
  {}

  Th( const string& text ):
    Element(InlineBlock, "th")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_TH_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
