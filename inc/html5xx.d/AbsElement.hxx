/*
 *
 */

#ifndef _HTML5XX_ABSELEMENT_HXX_
#define _HTML5XX_ABSELEMENT_HXX_

#include <string>

using namespace std;

namespace html
{

class AbsElement
{

protected:

  size_t  m_column;

  AbsElement( size_t column=0 ):
    m_column(column)
  {}

  string indent() const;

public:

  virtual ~AbsElement() {}

  size_t column() const { return m_column; }

  virtual void column( const size_t col ) { m_column = col; }

  virtual string toString() const = 0;

};

} // end namespace html

#endif // _HTML5XX_ABSELEMENT_HXX_

// vi: set ai et sw=2 sts=2 ts=2 :
