/**
* @Copyright (C) 2021 KylinSec Co., Ltd.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; If not, see <http: //www.gnu.org/licenses/>.
*
* Author:     luoqing <luoqing@kylinos.com.cn>
*/
#ifndef SCIENCEMODEPAGE_H
#define SCIENCEMODEPAGE_H

#include <QWidget>
#include "keys-page.h"
class Session;
class ScienceKeysPage;
class HistoryRecoder;
class StagePage;
class ScienceExprCalculator;

class Settings;
enum Button;
namespace Ui {
class ScienceModePage;
}

class ScienceModePage : public QWidget
{
    Q_OBJECT

public:
    explicit ScienceModePage(QWidget *parent = nullptr);
    ~ScienceModePage();

protected:
    virtual void showEvent(QShowEvent *event) override;

public slots:
    void handleScienceKeysButtonClicked(Button);

private:
    Ui::ScienceModePage *ui;
    Session *m_scienceSession = nullptr;
};

#endif // SCIENCEMODEPAGE_H
