/*
 *
 */

#ifndef _HTML5XX_CITE_HXX_
#define _HTML5XX_CITE_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Cite: public Element
{
public:

  Cite():
    Element(Inline, "cite")
  {}

  Cite( const string& text ):
    Element(Inline, "cite")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_CITE_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
