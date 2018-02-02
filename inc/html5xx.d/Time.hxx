/*
 *
 */

#ifndef _HTML5XX_TIME_HXX_
#define _HTML5XX_TIME_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Time: public Element
{
public:

  Time():
    Element(Inline, "time")
  {}

  Time( const string& text ):
    Element(Inline, "time")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_TIME_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
