/*
 *
 */

#ifndef _HTML5XX_INPUT_HXX_
#define _HTML5XX_INPUT_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Input: public Element
{
public:

  Input():
    Element(InlineBlock, "input")
  {}

  Input( const string& type ):
    Element(InlineBlock, "input")
  {
    attr("type", type);
  }

};

} // end namespace html

#endif // _HTML5XX_INPUT_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
