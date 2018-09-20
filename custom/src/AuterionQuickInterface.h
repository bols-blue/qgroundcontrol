/*!
 * @file
 *   @brief Auterion QtQuick Interface
 *   @author Gus Grubba <gus@grubba.com>
 */

#pragma once

#include "Vehicle.h"

#include <QObject>
#include <QTimer>
#include <QColor>
#include <QGeoPositionInfo>
#include <QGeoPositionInfoSource>

//-----------------------------------------------------------------------------
// QtQuick Interface (UI)
class AuterionQuickInterface : public QObject
{
    Q_OBJECT
public:
    AuterionQuickInterface(QObject* parent = nullptr);
    ~AuterionQuickInterface();
    Q_PROPERTY(QColor   borderColor READ    borderColor CONSTANT)
    void    init            ();
    QColor  borderColor     () { return QColor(0,224,75,80); }
};
