/*
 *
 */

#ifndef _HTML5XX_H5_HXX_
#define _HTML5XX_H5_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class H5: public Element
{
public:

  H5():
    Element(InlineBlock, "h5")
  {}

  H5( const string& text ):
    Element(InlineBlock, "h5")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_H5_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
