# html5xx:CMakeLists.txt

project( html5xx )
cmake_minimum_required( VERSION 3.7 )

set( HDR inc/html5xx )

file( GLOB SUBHDR inc/html5xx.d/*.hxx )

set( SRC
  src/Comment.cxx
  src/Document.cxx
  src/Element.cxx
  src/LineElement.cxx
  src/ScriptElement.cxx
  src/TextElement.cxx
  )

include_directories( BEFORE inc inc/html5xx.d )

add_library( html5xx STATIC ${SRC} )

if( MSVC )
  #install( TARGETS html5xx RUNTIME DESTINATION lib )
else()
  install( TARGETS html5xx ARCHIVE DESTINATION lib )
endif()

install( FILES ${HDR} DESTINATION include )
install( FILES ${SUBHDR} DESTINATION include/html5xx.d )

add_subdirectory( test )

# vi: set ai et sw=2 sts=2 ts=2 :
