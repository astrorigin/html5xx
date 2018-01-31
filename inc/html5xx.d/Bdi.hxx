/*
 *
 */

#ifndef _HTML5XX_BDI_HXX_
#define _HTML5XX_BDI_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Bdi: public Element
{
public:

  Bdi():
    Element(Inline, "bdi")
  {}

};

} // end namespace html

#endif // _HTML5XX_BDI_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
