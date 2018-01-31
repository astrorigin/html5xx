/*
 *
 */

#ifndef _HTML5XX_DETAILS_HXX_
#define _HTML5XX_DETAILS_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Details: public Element
{
public:

  Details():
    Element(Block, "details")
  {}

  Details( const string& open ):
    Element(Block, "details")
  {
    attr("open", open);
  }

};

} // end namespace html

#endif // _HTML5XX_DETAILS_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
