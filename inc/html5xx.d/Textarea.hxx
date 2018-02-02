/*
 *
 */

#ifndef _HTML5XX_TEXTAREA_HXX_
#define _HTML5XX_TEXTAREA_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Textarea: public Element
{
public:

  Textarea():
    Element(Block, "textarea")
  {}

  Textarea( int rows, int cols ):
    Element(Block, "textarea")
  {
    attr("rows", to_string(rows));
    attr("cols", to_string(cols));
  }

};

} // end namespace html

#endif // _HTML5XX_TEXTAREA_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
