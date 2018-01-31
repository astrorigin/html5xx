/*
 *
 */

#ifndef _HTML5XX_BDO_HXX_
#define _HTML5XX_BDO_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Bdo: public Element
{
public:

  Bdo():
    Element(Inline, "bdo")
  {}

  Bdo( const string& dir="rtl" ):
    Element(Inline, "bdo")
  {
    attr("dir", dir);
  }

};

} // end namespace html

#endif // _HTML5XX_BDO_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
