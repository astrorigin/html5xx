/*
 *
 */

#include <sstream>
#include "Element.hxx"

using namespace std;

namespace html
{

Element::~Element()
{
  const size_t sz = m_content.size();

  for (size_t i = 0; i < sz; ++i) {
    delete m_content[i];
  }
}

void Element::column( const size_t col )
{
  const size_t sz = m_content.size();

  m_column = col;

  for (size_t i = 0; i < sz; ++i) {
    m_content[i]->column(col + 1);
  }
}

string Element::attr( const string& key ) const
{
  const size_t sz = m_attributes.size();

  for (size_t i = 0; i < sz; ++i) {
    if (m_attributes[i].first == key) {
      return m_attributes[i].second;
    }
  }
  return "";
}

void Element::attr( const string& key, const string& value )
{
  const size_t sz = m_attributes.size();

  for (size_t i = 0; i < sz; ++i) {
    if (m_attributes[i].first == key) {
      m_attributes[i].second = value;
      return;
    }
  }

  pair<string, string> p(key, value);
  m_attributes.push_back(p);
}

void Element::put( AbsElement* elem )
{
  elem->column(m_column + 1);
  m_content.push_back(elem);
}

string Element::toString() const
{
  size_t sz;
  const string ind = indent();
  ostringstream ss;

  if (m_format != Inline) {
    ss << ind;
  }
  ss << '<' << m_name;

  if (sz = m_attributes.size()) {
    for (size_t i = 0; i < sz; ++i) {
      pair<string, string> p = m_attributes[i];
      ss << ' ' << p.first << "=\"" << escapeQuotes(p.second) << '"';
    }
  }

  if ((sz = m_content.size()) == 0) {
    if (m_format == Block) {
      ss << ">\n" << ind << "</" << m_name << ">\n";
    }
    else {
      ss << "/>";
      if (m_format == InlineBlock) {
        ss << '\n';
      }
    }
  }
  else {
    ss << '>';
    if (m_format == Block) {
      ss << '\n';
    }
    for (size_t i = 0; i < sz; ++i) {
      ss << m_content[i]->toString();
    }
    if (m_format == Block) {
      ss << ind;
    }
    ss << "</" << m_name << '>';
    if (m_format != Inline) {
      ss << '\n';
    }
  }

  return ss.str();
}

string Element::escapeQuotes( const string& str )
{
  size_t found, pos = 0;
  string s = str;

  while ((found = s.find('"', pos)) != string::npos) {
    s.replace(found, 1, "\\\"");
    pos = found + 2;
  }

  return s;
}

} // end namespace html

// vi: set ai et sw=2 sts=2 ts=2 :
