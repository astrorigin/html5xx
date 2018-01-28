/*
 *
 */

#include <iostream>
#include <html5xx>

using namespace std;
using namespace html;

int main()
{
  Document doc;
  Html* html = doc.html();

  Head* head = new Head();

  Title* title = new Title("Example");
  head->put(title);

  Meta* meta = new Meta();
  meta->attr("name", "description");
  meta->attr("content", "foo");
  head->put(meta);

  html->put(head);

  Body* body = new Body();
  html->put(body);

  P* p = new P();
  p->attr("id", "123");
  body->put(p);

  TextElement* text = new TextElement("testing\ntesting");
  p->put(text);


  cout << doc.toString();

  return 0;
}

// vi: set ai et sw=2 sts=2 ts=2 :
