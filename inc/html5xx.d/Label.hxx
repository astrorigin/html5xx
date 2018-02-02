/*
 *
 */

#ifndef _HTML5XX_LABEL_HXX_
#define _HTML5XX_LABEL_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Label: public Element
{
public:

  Label():
    Element(InlineBlock, "label")
  {}

  Label( const string& for_, const string& text ):
    Element(InlineBlock, "label")
  {
    attr("for", for_);
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_LABEL_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
