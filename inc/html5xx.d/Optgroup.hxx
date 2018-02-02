/*
 *
 */

#ifndef _HTML5XX_OPTGROUP_HXX_
#define _HTML5XX_OPTGROUP_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Optgroup: public Element
{
public:

  Optgroup():
    Element(InlineBlock, "optgroup")
  {}

  Optgroup( const string& label ):
    Element(InlineBlock, "optgroup")
  {
    attr("label", label);
  }

};

} // end namespace html

#endif // _HTML5XX_OPTGROUP_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
