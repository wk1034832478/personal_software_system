#ifndef RESURRECTIONDBPLUGIN_GLOBAL_H
#define RESURRECTIONDBPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RESURRECTIONDBPLUGIN_LIBRARY)
#  define RESURRECTIONDBPLUGIN_EXPORT Q_DECL_EXPORT
#else
#  define RESURRECTIONDBPLUGIN_EXPORT Q_DECL_IMPORT
#endif

#endif // RESURRECTIONDBPLUGIN_GLOBAL_H