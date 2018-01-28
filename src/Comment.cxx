/*
 *
 */

#include "Comment.hxx"

using namespace std;

namespace html
{

string Comment::toString() const
{
  string s = m_text;
  size_t found, pos = 0;
  const string ind = indent();

  while ((found = s.find('\n', pos)) != string::npos) {
    s.replace(found, 1, '\n' + ind + ' ');
    pos = found + ind.length() + 2;
  }

  return ind + "<!-- " + s + " -->\n";
}

} // end namespace html

// vi: set ai et sw=2 sts=2 ts=2 :
