/*
 *
 */

#ifndef _HTML5XX_TEMPLATE_HXX_
#define _HTML5XX_TEMPLATE_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Template: public Element
{
public:

  Template():
    Element(Block, "template")
  {}

};

} // end namespace html

#endif // _HTML5XX_TEMPLATE_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
