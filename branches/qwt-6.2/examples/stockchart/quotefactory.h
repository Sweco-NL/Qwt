/*****************************************************************************
 * Qwt Examples - Copyright (C) 2002 Uwe Rathmann
 * This file may be used under the terms of the 3-clause BSD License
 *****************************************************************************/

#ifndef QUOTE_FACTORY_H
#define QUOTE_FACTORY_H

#include <qglobal.h>

class QwtOHLCSample;
class QString;

#if QT_VERSION < 0x060000
template <typename T> class QVector;
#endif

namespace QuoteFactory
{
    enum Stock
    {
        BMW,
        Daimler,
        Porsche,

        NumStocks
    };

    QVector<QwtOHLCSample> samples2010( Stock );
    QString title( Stock );
}

#endif
