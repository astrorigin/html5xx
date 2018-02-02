/*
 *
 */

#ifndef _HTML5XX_OUTPUT_HXX_
#define _HTML5XX_OUTPUT_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Output: public Element
{
public:

  Output():
    Element(InlineBlock, "output")
  {}

  Output( const string& name ):
    Element(InlineBlock, "output")
  {
    attr("name", name);
  }

};

} // end namespace html

#endif // _HTML5XX_OUTPUT_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
