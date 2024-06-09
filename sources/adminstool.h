#ifndef ADMINSTOOL_H
#define ADMINSTOOL_H

#include <QMainWindow>
#include "../sources/Database.h"
#include <memory>

namespace Ui {
class AdminsTool;
}

class AdminsTool : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminsTool(QWidget *parent = nullptr);
    ~AdminsTool();
    static AdminsTool* CreateAdminWindow();

private slots:
    void on_firstUserPushButton_clicked();
    void on_secondUserPushButton_clicked();
    void on_showPrivatePushButton_clicked();
    void on_showPublicPushButton_clicked();
    void on_kickPushButton_clicked();
    void on_banPushButton_clicked();
    void on_actionExit_triggered();
    void updatePublicChat();
    void updatePrivateChat();

private:
    Ui::AdminsTool *ui;
    QMetaObject::Connection _con;
    QTimer* timer;
};

#endif // ADMINSTOOL_H
