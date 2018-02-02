/*
 *
 */

#ifndef _HTML5XX_PICTURE_HXX_
#define _HTML5XX_PICTURE_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Picture: public Element
{
public:

  Picture():
    Element(Block, "picture")
  {}

};

} // end namespace html

#endif // _HTML5XX_PICTURE_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
