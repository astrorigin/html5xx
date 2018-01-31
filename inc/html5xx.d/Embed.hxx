/*
 *
 */

#ifndef _HTML5XX_EMBED_HXX_
#define _HTML5XX_EMBED_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Embed: public Element
{
public:

  Embed():
    Element(InlineBlock, "embed")
  {}

  Embed( const string& src ):
    Element(InlineBlock, "embed")
  {
    attr("src", src);
  }

};

} // end namespace html

#endif // _HTML5XX_EMBED_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
