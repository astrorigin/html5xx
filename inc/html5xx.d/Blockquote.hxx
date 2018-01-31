/*
 *
 */

#ifndef _HTML5XX_BLOCKQUOTE_HXX_
#define _HTML5XX_BLOCKQUOTE_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Blockquote: public Element
{
public:

  Blockquote():
    Element(Block, "blockquote")
  {}

  Blockquote( const string& cite ):
    Element(Block, "blockquote")
  {
    attr("cite", cite);
  }

};

} // end namespace html

#endif // _HTML5XX_BLOCKQUOTE_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
