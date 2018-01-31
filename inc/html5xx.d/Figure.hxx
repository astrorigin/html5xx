/*
 *
 */

#ifndef _HTML5XX_FIGURE_HXX_
#define _HTML5XX_FIGURE_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Figure: public Element
{
public:

  Figure():
    Element(Block, "figure")
  {}

};

} // end namespace html

#endif // _HTML5XX_FIGURE_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
