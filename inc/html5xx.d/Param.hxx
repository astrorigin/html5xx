/*
 *
 */

#ifndef _HTML5XX_PARAM_HXX_
#define _HTML5XX_PARAM_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Param: public Element
{
public:

  Param():
    Element(InlineBlock, "param")
  {}

  Param( const string& name, const string& value ):
    Element(InlineBlock, "param")
  {
    attr("name", name);
    attr("value", value);
  }

};

} // end namespace html

#endif // _HTML5XX_PARAM_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
