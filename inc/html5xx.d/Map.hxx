/*
 *
 */

#ifndef _HTML5XX_MAP_HXX_
#define _HTML5XX_MAP_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Map: public Element
{
public:

  Map():
    Element(Block, "map")
  {}

  Map( const string& name ):
    Element(Block, "map")
  {
    attr("name", name);
  }

};

} // end namespace html

#endif // _HTML5XX_MAP_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
