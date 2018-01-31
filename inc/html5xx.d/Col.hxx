/*
 *
 */

#ifndef _HTML5XX_COL_HXX_
#define _HTML5XX_COL_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Col: public Element
{
public:

  Col():
    Element(Inline, "col")
  {}

};

} // end namespace html

#endif // _HTML5XX_COL_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
