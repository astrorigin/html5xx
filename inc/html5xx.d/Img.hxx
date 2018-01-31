/*
 *
 */

#ifndef _HTML5XX_IMG_HXX_
#define _HTML5XX_IMG_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Img: public Element
{
public:

  Img():
    Element(InlineBlock, "img")
  {}

  Img( const string& src ):
    Element(InlineBlock, "img")
  {
    attr("src", src);
  }

};

} // end namespace html

#endif // _HTML5XX_IMG_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
