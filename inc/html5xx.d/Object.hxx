/*
 *
 */

#ifndef _HTML5XX_OBJECT_HXX_
#define _HTML5XX_OBJECT_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Object: public Element
{
public:

  Object():
    Element(Block, "object")
  {}

  Object( const string& type, const string& data ):
    Element(Block, "object")
  {
    attr("type", type);
    attr("data", data);
  }

};

} // end namespace html

#endif // _HTML5XX_OBJECT_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
