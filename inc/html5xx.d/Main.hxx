/*
 *
 */

#ifndef _HTML5XX_MAIN_HXX_
#define _HTML5XX_MAIN_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Main: public Element
{
public:

  Main():
    Element(Block, "main")
  {}

};

} // end namespace html

#endif // _HTML5XX_MAIN_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
