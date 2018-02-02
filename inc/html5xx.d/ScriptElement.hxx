/*
 *
 */

#ifndef _HTML5XX_SCRIPTELEMENT_HXX_
#define _HTML5XX_SCRIPTELEMENT_HXX_

#include <string>
#include "StringElement.hxx"

using namespace std;

namespace html
{

class ScriptElement: public StringElement
{

public:

  ScriptElement( const char* str="" ):
    StringElement(str)
  {}

  ScriptElement( const string& str ):
    StringElement(str)
  {}

  virtual string toString() const;

  static ScriptElement* fromFile( const string& path );

};

} // end namespace html

#endif // _HTML5XX_SCRIPTELEMENT_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
