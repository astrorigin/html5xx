/*
 *
 */

#include "LineElement.hxx"

using namespace std;

namespace html
{

string LineElement::toString() const
{
  size_t found, pos;
  string s = m_text;

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

  return s;
}

} // end namespace html

// vi: set ai et sw=2 sts=2 ts=2 :
