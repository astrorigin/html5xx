/*
 *
 */

#include <string>
#include "Html.hxx"

using namespace std;

namespace html
{

class Document
{

  Html* m_html;

public:

  Document():
    m_html(new Html)
  {}

  ~Document() { delete m_html; }

  Html* html() const { return m_html; }

  string toString() const;

};

} // end namespace html

// vi: set ai et sw=2 sts=2 ts=2 :
