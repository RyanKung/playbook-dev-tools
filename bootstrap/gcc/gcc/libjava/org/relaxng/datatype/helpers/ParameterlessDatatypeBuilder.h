
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_relaxng_datatype_helpers_ParameterlessDatatypeBuilder__
#define __org_relaxng_datatype_helpers_ParameterlessDatatypeBuilder__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace relaxng
    {
      namespace datatype
      {
          class Datatype;
          class ValidationContext;
        namespace helpers
        {
            class ParameterlessDatatypeBuilder;
        }
      }
    }
  }
}

class org::relaxng::datatype::helpers::ParameterlessDatatypeBuilder : public ::java::lang::Object
{

public:
  ParameterlessDatatypeBuilder(::org::relaxng::datatype::Datatype *);
  void addParameter(::java::lang::String *, ::java::lang::String *, ::org::relaxng::datatype::ValidationContext *);
  ::org::relaxng::datatype::Datatype * createDatatype();
private:
  ::org::relaxng::datatype::Datatype * __attribute__((aligned(__alignof__( ::java::lang::Object)))) baseType;
public:
  static ::java::lang::Class class$;
};

#endif // __org_relaxng_datatype_helpers_ParameterlessDatatypeBuilder__
