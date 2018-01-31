/*
 *
 */

#ifndef _HTML5XX_AUDIO_HXX_
#define _HTML5XX_AUDIO_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Audio: public Element
{
public:

  Audio():
    Element(Block, "audio")
  {}

};

} // end namespace html

#endif // _HTML5XX_AUDIO_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
