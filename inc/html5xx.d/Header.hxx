/*
 *
 */

#ifndef _HTML5XX_HEADER_HXX_
#define _HTML5XX_HEADER_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Header: public Element
{
public:

  Header():
    Element(Block, "header")
  {}

};

} // end namespace html

#endif // _HTML5XX_HEADER_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
