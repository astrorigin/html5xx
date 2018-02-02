/*
 *
 */

#ifndef _HTML5XX_SELECT_HXX_
#define _HTML5XX_SELECT_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Select: public Element
{
public:

  Select():
    Element(Block, "select")
  {}

};

} // end namespace html

#endif // _HTML5XX_SELECT_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
