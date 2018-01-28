/*
 *
 */

#ifndef _HTML5XX_TITLE_HXX_
#define _HTML5XX_TITLE_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Title: public Element
{
public:

  Title():
    Element(InlineBlock, "title")
  {}

  Title( const string& title ):
    Element(InlineBlock, "title")
  {
    put(new LineElement(title));
  }

};

} // end namespace html

#endif // _HTML5XX_TITLE_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
