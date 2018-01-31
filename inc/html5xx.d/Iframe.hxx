/*
 *
 */

#ifndef _HTML5XX_IFRAME_HXX_
#define _HTML5XX_IFRAME_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Iframe: public Element
{
public:

  Iframe():
    Element(Block, "iframe")
  {}

  Iframe( const string& src ):
    Element(Block, "iframe")
  {
    attr("src", src);
  }

};

} // end namespace html

#endif // _HTML5XX_IFRAME_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
