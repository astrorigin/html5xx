/*
 *
 */

#ifndef _HTML5XX_H1_HXX_
#define _HTML5XX_H1_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class H1: public Element
{
public:

  H1():
    Element(InlineBlock, "h1")
  {}

  H1( const string& text ):
    Element(InlineBlock, "h1")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_H1_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
