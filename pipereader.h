/***************************************************************************
**                                                                        **
**  Part of PTPDemo, program to visualize IEEE1588 synchronization        **
**  Copyright (C) 2013 Timesys Corporation                                **
**                                                                        **
**  This program is free software: you can redistribute it and/or modify  **
**  it under the terms of the GNU General Public License as published by  **
**  the Free Software Foundation, either version 3 of the License, or     **
**  (at your option) any later version.                                   **
**                                                                        **
**  This program is distributed in the hope that it will be useful,       **
**  but WITHOUT ANY WARRANTY; without even the implied warranty of        **
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         **
**  GNU General Public License for more details.                          **
**                                                                        **
**  You should have received a copy of the GNU General Public License     **
**  along with this program.  If not, see http://www.gnu.org/licenses/.   **
**                                                                        **
****************************************************************************
**           Author: Maciej Halasz                                        **
**  Website/Contact: http://www.timesys.com/                              **
**             Date: 10.01.13                                             **
**          Version: 1.0.0                                                **
****************************************************************************/

#ifndef PIPEREADER_H
#define PIPEREADER_H

#include <QThread>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QDebug>

class PipeReader : public QThread
{
    Q_OBJECT
public:
    explicit PipeReader(QObject *parent = 0);
    void run();

signals:
    void dataToPlot(QStringList);
    
signals:
    
public slots:
    
};

#endif // PIPEREADER_H
