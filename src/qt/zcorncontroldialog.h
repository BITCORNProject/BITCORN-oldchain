// Copyright (c) 2017-2018 The BITCORN developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZCORNCONTROLDIALOG_H
#define ZCORNCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zcorn/zerocoin.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZCornControlDialog;
}

class CZCornControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZCornControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZCornControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZCornControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZCornControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZCornControlDialog(QWidget *parent);
    ~ZCornControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZCornControlDialog *ui;
    WalletModel* model;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_PRECOMPUTE,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZCornControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZCORNCONTROLDIALOG_H
