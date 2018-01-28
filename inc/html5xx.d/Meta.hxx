/*
 *
 */

#ifndef _HTML5XX_META_HXX_
#define _HTML5XX_META_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Meta: public Element
{
public:

  Meta():
    Element(InlineBlock, "meta")
  {}

  Meta( const string& name, const string& content ):
    Element(InlineBlock, "meta")
  {
    attr("name", name);
    attr("content", content);
  }

};

} // end namespace html

#endif // _HTML5XX_META_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
