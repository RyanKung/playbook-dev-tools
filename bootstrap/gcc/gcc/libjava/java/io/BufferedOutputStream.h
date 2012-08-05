
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_BufferedOutputStream__
#define __java_io_BufferedOutputStream__

#pragma interface

#include <java/io/FilterOutputStream.h>
#include <gcj/array.h>


class java::io::BufferedOutputStream : public ::java::io::FilterOutputStream
{

public:
  BufferedOutputStream(::java::io::OutputStream *);
  BufferedOutputStream(::java::io::OutputStream *, jint);
  virtual void flush();
  virtual void write(jint);
  virtual void write(JArray< jbyte > *, jint, jint);
private:
  static const jint DEFAULT_BUFFER_SIZE = 512;
public: // actually protected
  JArray< jbyte > * __attribute__((aligned(__alignof__( ::java::io::FilterOutputStream)))) buf;
  jint count;
public:
  static ::java::lang::Class class$;
};

#endif // __java_io_BufferedOutputStream__