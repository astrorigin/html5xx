/*
 *
 */

#ifndef _HTML5XX_FORM_HXX_
#define _HTML5XX_FORM_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Form: public Element
{
public:

  Form():
    Element(Block, "form")
  {}

};

} // end namespace html

#endif // _HTML5XX_FORM_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
