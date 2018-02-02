/*
 *
 */

#ifndef _HTML5XX_METER_HXX_
#define _HTML5XX_METER_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Meter: public Element
{
public:

  Meter():
    Element(InlineBlock, "meter")
  {}

  Meter( const string& value ):
    Element(InlineBlock, "meter")
  {
    attr("value", value);
  }

  Meter( int value ):
    Element(InlineBlock, "meter")
  {
    attr("value", to_string(value));
  }

  Meter( double value ):
    Element(InlineBlock, "meter")
  {
    attr("value", to_string(value));
  }

};

} // end namespace html

#endif // _HTML5XX_METER_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
