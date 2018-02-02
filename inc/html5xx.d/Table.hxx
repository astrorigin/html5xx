/*
 *
 */

#ifndef _HTML5XX_TABLE_HXX_
#define _HTML5XX_TABLE_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Table: public Element
{
public:

  Table():
    Element(Block, "table")
  {}

};

} // end namespace html

#endif // _HTML5XX_TABLE_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
