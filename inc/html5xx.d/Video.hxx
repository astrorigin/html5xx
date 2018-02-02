/*
 *
 */

#ifndef _HTML5XX_VIDEO_HXX_
#define _HTML5XX_VIDEO_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Video: public Element
{
public:

  Video():
    Element(Block, "video")
  {}

};

} // end namespace html

#endif // _HTML5XX_VIDEO_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
