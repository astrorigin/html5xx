/*
 *
 */

#ifndef _HTML5XX_DL_HXX_
#define _HTML5XX_DL_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Dl: public Element
{
public:

  Dl():
    Element(Block, "dl")
  {}

};

} // end namespace html

#endif // _HTML5XX_DL_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
