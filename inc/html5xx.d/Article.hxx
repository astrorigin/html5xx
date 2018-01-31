/*
 *
 */

#ifndef _HTML5XX_ARTICLE_HXX_
#define _HTML5XX_ARTICLE_HXX_

#include "Element.hxx"

using namespace std;

namespace html
{

class Article: public Element
{
public:

  Article():
    Element(Block, "article")
  {}

};

} // end namespace html

#endif // _HTML5XX_ARTICLE_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
