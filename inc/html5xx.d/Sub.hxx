/*
 *
 */

#ifndef _HTML5XX_SUB_HXX_
#define _HTML5XX_SUB_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Sub: public Element
{
public:

  Sub():
    Element(Inline, "sub")
  {}

  Sub( const string& text ):
    Element(Inline, "sub")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_SUB_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
