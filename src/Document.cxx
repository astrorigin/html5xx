/*
 *
 */

#include "Document.hxx"

namespace html
{

string Document::toString() const
{
  return "<!DOCTYPE html>\n" + m_html->toString();
}

} // end namespace html

// vi: set ai et sw=2 sts=2 ts=2 :
