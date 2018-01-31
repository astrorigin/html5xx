/*
 *
 */

#ifndef _HTML5XX_DATA_HXX_
#define _HTML5XX_DATA_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Data: public Element
{
public:

  Data():
    Element(Inline, "data")
  {}

  Data( const string& value ):
    Element(Inline, "data")
  {
    attr("value", value);
  }

};

} // end namespace html

#endif // _HTML5XX_DATA_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
