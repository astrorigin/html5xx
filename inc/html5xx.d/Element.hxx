/*
 *
 */

#ifndef _HTML5XX_ELEMENT_HXX_
#define _HTML5XX_ELEMENT_HXX_

#include <string>
#include <utility>
#include <vector>
#include "AbsElement.hxx"

using namespace std;

namespace html
{

class Element: public AbsElement
{

public:

  enum Format
  {
    Inline,
    InlineBlock,
    Block
  };

protected:

  Format  m_format;
  string  m_name;

  vector< pair<string, string> > m_attributes;
  vector<AbsElement*> m_content;

  Element( Format fmt, const string& name ):
    AbsElement(0),
    m_format(fmt),
    m_name(name)
  {}

  static string escapeQuotes( const string& str );

public:

  virtual ~Element();

  virtual void column( const size_t col );

  Format format() const { return m_format; }

  void format( Format fmt ) { m_format = fmt; }

  string name() const { return m_name; }

  string attr( const string& key ) const;

  void attr( const string& key, const string& value );

  void put( AbsElement* elem );

  virtual string toString() const;

  static Element* factory( Format fmt, const string& name )
  {
    return new Element(fmt, name);
  }

};

} // end namespace html

#endif // _HTML5XX_ELEMENT_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
