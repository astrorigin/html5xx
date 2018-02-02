/*
 *
 */

#ifndef _HTML5XX_RT_HXX_
#define _HTML5XX_RT_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Rt: public Element
{
public:

  Rt():
    Element(Inline, "rt")
  {}

  Rt( const string& text ):
    Element(Inline, "rt")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_RT_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
