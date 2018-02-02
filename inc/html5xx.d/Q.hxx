/*
 *
 */

#ifndef _HTML5XX_Q_HXX_
#define _HTML5XX_Q_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Q: public Element
{
public:

  Q():
    Element(Inline, "q")
  {}

  Q( const string& text ):
    Element(Inline, "q")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_Q_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
