
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_validation_datatype_SimpleType__
#define __gnu_xml_validation_datatype_SimpleType__

#pragma interface

#include <gnu/xml/validation/datatype/Type.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace validation
      {
        namespace datatype
        {
            class Annotation;
            class SimpleType;
        }
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace namespace
      {
          class QName;
      }
    }
  }
  namespace org
  {
    namespace relaxng
    {
      namespace datatype
      {
          class DatatypeStreamingValidator;
          class ValidationContext;
      }
    }
  }
}

class gnu::xml::validation::datatype::SimpleType : public ::gnu::xml::validation::datatype::Type
{

public:
  SimpleType(::javax::xml::namespace::QName *, jint, ::java::util::Set *, jint, ::gnu::xml::validation::datatype::SimpleType *, ::gnu::xml::validation::datatype::Annotation *);
  virtual jboolean isValid(::java::lang::String *, ::org::relaxng::datatype::ValidationContext *);
  virtual void checkValid(::java::lang::String *, ::org::relaxng::datatype::ValidationContext *);
private:
  static jint countDigits(::java::lang::String *, jboolean);
public:
  virtual ::org::relaxng::datatype::DatatypeStreamingValidator * createStreamingValidator(::org::relaxng::datatype::ValidationContext *);
  virtual ::java::lang::Object * createValue(::java::lang::String *, ::org::relaxng::datatype::ValidationContext *);
  virtual jboolean sameValue(::java::lang::Object *, ::java::lang::Object *);
  virtual jint valueHashCode(::java::lang::Object *);
  virtual jint getIdType();
  virtual jboolean isContextDependent();
  static const jint ANY = 0;
  static const jint ATOMIC = 1;
  static const jint LIST = 2;
  static const jint UNION = 3;
  static const jint ID_TYPE_NULL = 0;
  static const jint ID_TYPE_ID = 1;
  static const jint ID_TYPE_IDREF = 2;
  static const jint ID_TYPE_IDREFS = 3;
  jint __attribute__((aligned(__alignof__( ::gnu::xml::validation::datatype::Type)))) variety;
  ::java::util::Set * facets;
  jint fundamentalFacets;
  ::gnu::xml::validation::datatype::SimpleType * baseType;
  ::gnu::xml::validation::datatype::Annotation * annotation;
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_validation_datatype_SimpleType__