/*
 *
 */

#ifndef _HTML5XX_WBR_HXX_
#define _HTML5XX_WBR_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Wbr: public Element
{
public:

  Wbr():
    Element(Inline, "wbr")
  {}

};

} // end namespace html

#endif // _HTML5XX_WBR_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
