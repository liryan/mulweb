/****************************************************************************
** Meta object code from reading C++ file 'QtWebView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtWebView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtWebView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtWebView_t {
    QByteArrayData data[16];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtWebView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtWebView_t qt_meta_stringdata_QtWebView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QtWebView"
QT_MOC_LITERAL(1, 10, 16), // "on_btnGo_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "on_btnStop_clicked"
QT_MOC_LITERAL(4, 47, 19), // "on_btnFresh_clicked"
QT_MOC_LITERAL(5, 67, 18), // "on_btnBack_clicked"
QT_MOC_LITERAL(6, 86, 21), // "on_btnForward_clicked"
QT_MOC_LITERAL(7, 108, 18), // "on_btnFind_clicked"
QT_MOC_LITERAL(8, 127, 23), // "on_btnFindPanel_clicked"
QT_MOC_LITERAL(9, 151, 6), // "onLoad"
QT_MOC_LITERAL(10, 158, 8), // "progress"
QT_MOC_LITERAL(11, 167, 14), // "onLoadFinished"
QT_MOC_LITERAL(12, 182, 12), // "onUrlChanged"
QT_MOC_LITERAL(13, 195, 8), // "FindText"
QT_MOC_LITERAL(14, 204, 8), // "QString&"
QT_MOC_LITERAL(15, 213, 3) // "str"

    },
    "QtWebView\0on_btnGo_clicked\0\0"
    "on_btnStop_clicked\0on_btnFresh_clicked\0"
    "on_btnBack_clicked\0on_btnForward_clicked\0"
    "on_btnFind_clicked\0on_btnFindPanel_clicked\0"
    "onLoad\0progress\0onLoadFinished\0"
    "onUrlChanged\0FindText\0QString&\0str"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtWebView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x0a /* Public */,
      11,    1,   79,    2, 0x0a /* Public */,
      12,    1,   82,    2, 0x0a /* Public */,
      13,    1,   85,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void QtWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtWebView *_t = static_cast<QtWebView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnGo_clicked(); break;
        case 1: _t->on_btnStop_clicked(); break;
        case 2: _t->on_btnFresh_clicked(); break;
        case 3: _t->on_btnBack_clicked(); break;
        case 4: _t->on_btnForward_clicked(); break;
        case 5: _t->on_btnFind_clicked(); break;
        case 6: _t->on_btnFindPanel_clicked(); break;
        case 7: _t->onLoad((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 10: _t->FindText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtWebView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QtWebView.data,
      qt_meta_data_QtWebView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtWebView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QtWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
