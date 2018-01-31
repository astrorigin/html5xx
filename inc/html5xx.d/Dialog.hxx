/*
 *
 */

#ifndef _HTML5XX_DIALOG_HXX_
#define _HTML5XX_DIALOG_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Dialog: public Element
{
public:

  Dialog():
    Element(Block, "dialog")
  {}

  Dialog( const string& open ):
    Element(Block, "dialog")
  {
    attr("open", open);
  }

};

} // end namespace html

#endif // _HTML5XX_DIALOG_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
