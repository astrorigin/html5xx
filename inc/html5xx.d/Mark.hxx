/*
 *
 */

#ifndef _HTML5XX_MARK_HXX_
#define _HTML5XX_MARK_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Mark: public Element
{
public:

  Mark():
    Element(Inline, "mark")
  {}

};

} // end namespace html

#endif // _HTML5XX_MARK_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
