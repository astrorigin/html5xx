/*
 *
 */

#ifndef _HTML5XX_THEAD_HXX_
#define _HTML5XX_THEAD_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Thead: public Element
{
public:

  Thead():
    Element(Block, "thead")
  {}

};

} // end namespace html

#endif // _HTML5XX_THEAD_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
