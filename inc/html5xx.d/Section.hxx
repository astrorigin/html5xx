/*
 *
 */

#ifndef _HTML5XX_SECTION_HXX_
#define _HTML5XX_SECTION_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Section: public Element
{
public:

  Section():
    Element(Block, "section")
  {}

};

} // end namespace html

#endif // _HTML5XX_SECTION_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
