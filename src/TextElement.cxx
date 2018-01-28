/*
 *
 */

#include <fstream>
#include <sstream>
#include "TextElement.hxx"

using namespace std;

namespace html
{

string TextElement::toString() const
{
  size_t found, pos;
  string s = indent() + m_text;

  const string nl = "<br/>\n" + indent();

  pos = 0;
  while ((found = s.find('&', pos)) != string::npos) {
    s.replace(found, 1, "&amp;");
    pos = found + 5;
  }

  pos = 0;
  while ((found = s.find('<', pos)) != string::npos) {
    s.replace(found, 1, "&lt;");
    pos = found + 4;
  }

  pos = 0;
  while ((found = s.find('>', pos)) != string::npos) {
    s.replace(found, 1, "&gt;");
    pos = found + 4;
  }

  pos = 0;
  while ((found = s.find('\n', pos)) != string::npos) {
    s.replace(found, 1, nl);
    pos = found + nl.length();
  }

  return s.back() != '\n' ? s + '\n' : s;
}

TextElement* TextElement::fromFile( const string& path )
{
  ifstream ifs(path);
  if (!ifs.is_open()) {
    return nullptr;
  }

  ostringstream buf;
  buf << ifs.rdbuf();
  TextElement* el = new TextElement(buf.str());

  ifs.close();
  return el;
}

} // end namespace html

// vi: set ai et sw=2 sts=2 ts=2 :
