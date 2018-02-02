/*
 *
 */

#ifndef _HTML5XX_SOURCE_HXX_
#define _HTML5XX_SOURCE_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Source: public Element
{
public:

  Source():
    Element(InlineBlock, "source")
  {}

  Source( const string& src, const string& type ):
    Element(InlineBlock, "source")
  {
    attr("src", src);
    attr("type", type);
  }

};

} // end namespace html

#endif // _HTML5XX_SOURCE_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
