
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl__
#define __java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl__

#pragma interface

#include <java/util/concurrent/atomic/AtomicReferenceFieldUpdater.h>
extern "Java"
{
  namespace sun
  {
    namespace misc
    {
        class Unsafe;
    }
  }
}

class java::util::concurrent::atomic::AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl : public ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater
{

public: // actually package-private
  AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl(::java::lang::Class *, ::java::lang::Class *, ::java::lang::String *);
  void targetCheck(::java::lang::Object *);
  void updateCheck(::java::lang::Object *, ::java::lang::Object *);
public:
  jboolean compareAndSet(::java::lang::Object *, ::java::lang::Object *, ::java::lang::Object *);
  jboolean weakCompareAndSet(::java::lang::Object *, ::java::lang::Object *, ::java::lang::Object *);
  void set(::java::lang::Object *, ::java::lang::Object *);
  void lazySet(::java::lang::Object *, ::java::lang::Object *);
  ::java::lang::Object * get(::java::lang::Object *);
private:
  void ensureProtectedAccess(::java::lang::Object *);
  static ::sun::misc::Unsafe * unsafe;
  jlong __attribute__((aligned(__alignof__( ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater)))) offset;
  ::java::lang::Class * tclass;
  ::java::lang::Class * vclass;
  ::java::lang::Class * cclass;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl__