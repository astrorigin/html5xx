/*
 *
 */

#ifndef _HTML5XX_OPTION_HXX_
#define _HTML5XX_OPTION_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Option: public Element
{
public:

  Option():
    Element(InlineBlock, "option")
  {}

  Option( const string& value, const string& text ):
    Element(InlineBlock, "option")
  {
    attr("value", value);
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_OPTION_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
