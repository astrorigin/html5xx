/*
 *
 */

#ifndef _HTML5XX_H6_HXX_
#define _HTML5XX_H6_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class H6: public Element
{
public:

  H6():
    Element(InlineBlock, "h6")
  {}

  H6( const string& text ):
    Element(InlineBlock, "h6")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_H6_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
