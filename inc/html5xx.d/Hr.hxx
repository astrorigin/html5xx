/*
 *
 */

#ifndef _HTML5XX_HR_HXX_
#define _HTML5XX_HR_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Hr: public Element
{
public:

  Hr():
    Element(Inline, "hr")
  {}

};

} // end namespace html

#endif // _HTML5XX_HR_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
