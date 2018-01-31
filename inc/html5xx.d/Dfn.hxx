/*
 *
 */

#ifndef _HTML5XX_DFN_HXX_
#define _HTML5XX_DFN_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Dfn: public Element
{
public:

  Dfn():
    Element(Inline, "dfn")
  {}

};

} // end namespace html

#endif // _HTML5XX_DFN_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
