/*
 *
 */

#ifndef _HTML5XX_PRE_HXX_
#define _HTML5XX_PRE_HXX_

#include "Element.hxx"
#include "ScriptElement.hxx"

using namespace std;

namespace html
{

class Pre: public Element
{
public:

  Pre():
    Element(Block, "pre")
  {}

  Pre( const string& text ):
    Element(Block, "pre")
  {
    put(new ScriptElement(text));
  }

};

} // end namespace html

#endif // _HTML5XX_PRE_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
