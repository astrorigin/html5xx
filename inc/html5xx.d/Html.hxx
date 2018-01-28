/*
 *
 */

#ifndef _HTML5XX_HTML_HXX_
#define _HTML5XX_HTML_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Html: public Element
{
public:

  Html():
    Element(Block, "html")
  {}

  void xmlns( const string& ns="http://www.w3.org/1999/xhtml" )
  {
    attr("xmlns", ns);
  }

};

} // end namespace html

#endif // _HTML5XX_HTML_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
