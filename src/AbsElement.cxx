/*
 *
 */

#include <sstream>
#include "AbsElement.hxx"

using namespace std;

namespace html
{

string AbsElement::indent() const
{
  if (m_column == 0) {
    return "";
  }

  ostringstream ss;

  for (size_t i = 0; i < m_column; ++i) {
    ss << ' ';
  }

  return ss.str();
}

} // end namespace html

// vi: set ai et sw=2 sts=2 ts=2 :
