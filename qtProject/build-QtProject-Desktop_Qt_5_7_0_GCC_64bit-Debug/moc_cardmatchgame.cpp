/****************************************************************************
** Meta object code from reading C++ file 'cardmatchgame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QtProject/cardmatchgame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cardmatchgame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_std__cardMatchGame_t {
    QByteArrayData data[13];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_std__cardMatchGame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_std__cardMatchGame_t qt_meta_stringdata_std__cardMatchGame = {
    {
QT_MOC_LITERAL(0, 0, 18), // "std::cardMatchGame"
QT_MOC_LITERAL(1, 19, 8), // "findNext"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 3), // "str"
QT_MOC_LITERAL(4, 33, 19), // "Qt::CaseSensitivity"
QT_MOC_LITERAL(5, 53, 2), // "cs"
QT_MOC_LITERAL(6, 56, 12), // "findPrevious"
QT_MOC_LITERAL(7, 69, 14), // "newGameClicked"
QT_MOC_LITERAL(8, 84, 15), // "prevGameClicked"
QT_MOC_LITERAL(9, 100, 15), // "nextGameClicked"
QT_MOC_LITERAL(10, 116, 11), // "itemClicked"
QT_MOC_LITERAL(11, 128, 7), // "clicked"
QT_MOC_LITERAL(12, 136, 11) // "updateScore"

    },
    "std::cardMatchGame\0findNext\0\0str\0"
    "Qt::CaseSensitivity\0cs\0findPrevious\0"
    "newGameClicked\0prevGameClicked\0"
    "nextGameClicked\0itemClicked\0clicked\0"
    "updateScore"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_std__cardMatchGame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       6,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    1,   62,    2, 0x08 /* Private */,
      12,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

       0        // eod
};

void std::cardMatchGame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        cardMatchGame *_t = static_cast<cardMatchGame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->findNext((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2]))); break;
        case 1: _t->findPrevious((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2]))); break;
        case 2: _t->newGameClicked(); break;
        case 3: _t->prevGameClicked(); break;
        case 4: _t->nextGameClicked(); break;
        case 5: _t->itemClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateScore(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (cardMatchGame::*_t)(const QString & , Qt::CaseSensitivity );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&cardMatchGame::findNext)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (cardMatchGame::*_t)(const QString & , Qt::CaseSensitivity );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&cardMatchGame::findPrevious)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject std::cardMatchGame::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_std__cardMatchGame.data,
      qt_meta_data_std__cardMatchGame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *std::cardMatchGame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *std::cardMatchGame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_std__cardMatchGame.stringdata0))
        return static_cast<void*>(const_cast< cardMatchGame*>(this));
    return QDialog::qt_metacast(_clname);
}

int std::cardMatchGame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void std::cardMatchGame::findNext(const QString & _t1, Qt::CaseSensitivity _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void std::cardMatchGame::findPrevious(const QString & _t1, Qt::CaseSensitivity _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
