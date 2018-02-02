/*
 *
 */

#ifndef _HTML5XX_SAMP_HXX_
#define _HTML5XX_SAMP_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Samp: public Element
{
public:

  Samp():
    Element(InlineBlock, "samp")
  {}

  Samp( const string& text ):
    Element(InlineBlock, "samp")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_SAMP_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
