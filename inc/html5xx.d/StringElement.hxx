/*
 *
 */

#ifndef _HTML5XX_STRINGELEMENT_HXX_
#define _HTML5XX_STRINGELEMENT_HXX_

#include <string>
#include "AbsElement.hxx"

using namespace std;

namespace html
{

class StringElement: public AbsElement
{

protected:

  string  m_text;

  StringElement( const string& str="" ):
    AbsElement(0),
    m_text(str)
  {}

public:

  string text() const { return m_text; }

  void text( const string& str ) { m_text = str; }

};

} // end namespace html

#endif // _HTML5XX_STRINGELEMENT_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
