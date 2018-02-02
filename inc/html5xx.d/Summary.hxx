/*
 *
 */

#ifndef _HTML5XX_SUMMARY_HXX_
#define _HTML5XX_SUMMARY_HXX_

#include "Element.hxx"
#include "LineElement.hxx"

using namespace std;

namespace html
{

class Summary: public Element
{
public:

  Summary():
    Element(InlineBlock, "summary")
  {}

  Summary( const string& text ):
    Element(InlineBlock, "summary")
  {
    put(new LineElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_SUMMARY_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
