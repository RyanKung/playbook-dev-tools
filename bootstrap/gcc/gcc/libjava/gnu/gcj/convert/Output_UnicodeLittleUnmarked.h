
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_convert_Output_UnicodeLittleUnmarked__
#define __gnu_gcj_convert_Output_UnicodeLittleUnmarked__

#pragma interface

#include <gnu/gcj/convert/UnicodeToBytes.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace convert
      {
          class Output_UnicodeLittleUnmarked;
      }
    }
  }
}

class gnu::gcj::convert::Output_UnicodeLittleUnmarked : public ::gnu::gcj::convert::UnicodeToBytes
{

public:
  Output_UnicodeLittleUnmarked();
  virtual ::java::lang::String * getName();
  virtual jint write(JArray< jchar > *, jint, jint);
  static ::java::lang::Class class$;
};

#endif // __gnu_gcj_convert_Output_UnicodeLittleUnmarked__