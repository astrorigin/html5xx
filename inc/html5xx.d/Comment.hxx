/*
 *
 */

#ifndef _HTML5XX_COMMENT_HXX_
#define _HTML5XX_COMMENT_HXX_

#include <string>
#include "StringElement.hxx"

using namespace std;

namespace html
{

class Comment: public StringElement
{

public:

  Comment( const string& str="" ):
    StringElement(str)
  {}

  virtual string toString() const;

};

} // end namespace html

#endif // _HTML5XX_COMMENT_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
