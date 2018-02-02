/*
 *
 */

#ifndef _HTML5XX_TRACK_HXX_
#define _HTML5XX_TRACK_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Track: public Element
{
public:

  Track():
    Element(InlineBlock, "track")
  {}

  Track( const string& src ):
    Element(InlineBlock, "track")
  {
    attr("src", src);
  }

};

} // end namespace html

#endif // _HTML5XX_TRACK_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
