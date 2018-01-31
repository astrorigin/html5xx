/*
 *
 */

#ifndef _HTML5XX_SCRIPT_HXX_
#define _HTML5XX_SCRIPT_HXX_

#include "Element.hxx"

namespace html
{

class Script: public Element
{
public:

  Script( const string& type="text/javascript" ):
    Element(Block, "script")
  {
    if (!type.empty()) {
      attr("type", type);
    }
  }

};

} // end namespace html

#endif // _HTML5XX_SCRIPT_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
