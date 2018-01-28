/*
 *
 */

#ifndef _HTML5XX_TEXTELEMENT_HXX_
#define _HTML5XX_TEXTELEMENT_HXX_

#include <string>
#include "StringElement.hxx"

using namespace std;

namespace html
{

class TextElement: public StringElement
{

public:

  TextElement( const string& str="" ):
    StringElement(str)
  {}

  virtual string toString() const;

  static TextElement* fromFile( const string& path );

};

} // end namespace html

#endif // _HTML5XX_TEXTELEMENT_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
