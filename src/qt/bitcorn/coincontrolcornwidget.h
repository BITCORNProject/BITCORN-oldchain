// Copyright (c) 2019 The BITCORN developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLCORNWIDGET_H
#define COINCONTROLCORNWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlCornWidget;
}

class CoinControlCornWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlCornWidget(QWidget *parent = nullptr);
    ~CoinControlCornWidget();

private:
    Ui::CoinControlCornWidget *ui;
};

#endif // COINCONTROLCORNWIDGET_H
