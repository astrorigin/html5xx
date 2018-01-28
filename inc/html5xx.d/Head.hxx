/*
 *
 */

#ifndef _HTML5XX_HEAD_HXX_
#define _HTML5XX_HEAD_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Head: public Element
{
public:

  Head():
    Element(Block, "head")
  {}

};

} // end namespace html

#endif // _HTML5XX_HEAD_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
