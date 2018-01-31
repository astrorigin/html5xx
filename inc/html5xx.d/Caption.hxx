/*
 *
 */

#ifndef _HTML5XX_CAPTION_HXX_
#define _HTML5XX_CAPTION_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Caption: public Element
{
public:

  Caption():
    Element(InlineBlock, "caption")
  {}

  Caption( const string& text ):
    Element(InlineBlock, "caption")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_CAPTION_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
