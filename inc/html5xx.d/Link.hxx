/*
 *
 */

#ifndef _HTML5XX_LINK_HXX_
#define _HTML5XX_LINK_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Link: public Element
{
public:

  Link():
    Element(InlineBlock, "link")
  {}

  Link( const string& rel, const string& type, const string& href ):
    Element(InlineBlock, "link")
  {
    attr("rel", rel);
    attr("type", type);
    attr("href", href);
  }

};

} // end namespace html

#endif // _HTML5XX_LINK_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
