
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_DefaultCellEditor$EditorDelegate__
#define __javax_swing_DefaultCellEditor$EditorDelegate__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class ActionEvent;
          class ItemEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
        class DefaultCellEditor;
        class DefaultCellEditor$EditorDelegate;
    }
  }
}

class javax::swing::DefaultCellEditor$EditorDelegate : public ::java::lang::Object
{

public: // actually protected
  DefaultCellEditor$EditorDelegate(::javax::swing::DefaultCellEditor *);
public:
  virtual void setValue(::java::lang::Object *);
  virtual ::java::lang::Object * getCellEditorValue();
  virtual jboolean isCellEditable(::java::util::EventObject *);
  virtual jboolean shouldSelectCell(::java::util::EventObject *);
  virtual jboolean stopCellEditing();
  virtual void cancelCellEditing();
  virtual jboolean startCellEditing(::java::util::EventObject *);
  virtual void actionPerformed(::java::awt::event::ActionEvent *);
  virtual void itemStateChanged(::java::awt::event::ItemEvent *);
public: // actually package-private
  virtual void fireEditingStopped();
  virtual void fireEditingCanceled();
private:
  static const jlong serialVersionUID = -1420007406015481933LL;
public: // actually protected
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::java::lang::Object)))) value;
public: // actually package-private
  ::javax::swing::DefaultCellEditor * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_DefaultCellEditor$EditorDelegate__