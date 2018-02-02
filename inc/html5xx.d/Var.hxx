/*
 *
 */

#ifndef _HTML5XX_VAR_HXX_
#define _HTML5XX_VAR_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Var: public Element
{
public:

  Var():
    Element(Inline, "var")
  {}

  Var( const string& text ):
    Element(Inline, "var")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_VAR_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
