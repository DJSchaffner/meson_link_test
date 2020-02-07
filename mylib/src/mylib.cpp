#include "mylib.h"

// this include freetype.h and with it FT_Library etc.
#include <ft2build.h>
#include FT_FREETYPE_H

MyLib::MyLib() {}

void MyLib::doStuff() {
  FT_Library ft;

  if (FT_Init_FreeType(&ft)) {
    // ERROR
    return;
  }

  FT_Done_FreeType(ft);
}