/*
 *
 */

#include <fstream>
#include <sstream>
#include "ScriptElement.hxx"

using namespace std;

namespace html
{

string ScriptElement::toString() const
{
  if (m_column == 0) {
    return m_text.back() != '\n' ? m_text + '\n' : m_text;
  }

  size_t found, pos = 0;
  string s = indent() + m_text;
  const string ind = string("\n") + indent();

  while ((found = s.find('\n', pos)) != string::npos) {
    s.replace(found, 1, ind);
    pos = found + ind.length();
  }

  return s.back() != '\n' ? s + '\n' : s;
}

ScriptElement* ScriptElement::fromFile( const string& path )
{
  ifstream ifs(path);
  if (!ifs.is_open()) {
    return nullptr;
  }

  ostringstream buf;
  buf << ifs.rdbuf();
  ScriptElement* el = new ScriptElement(buf.str());

  ifs.close();
  return el;
}

} // end namespace html

// vi: set ai et sw=2 sts=2 ts=2 :
