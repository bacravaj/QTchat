#ifndef STARTSCREEN_H
#define STARTSCREEN_H

#include <QDialog>
#include "../sources/dbsimulation.h"
#include <memory>

namespace Ui {
class StartScreen;
}

class StartScreen : public QDialog
{
    Q_OBJECT

public:
    explicit StartScreen(QWidget *parent = nullptr);
    ~StartScreen();
    void setLoginForm();
    void setRegistrarionForm();
    int userId() const;
    QString userName() const;


public slots:
    void onLoggedIn(uint UserId, QString userName);
    void onRejectRequested();
private:
    Ui::StartScreen *ui;
    int m_userId;
    QString m_userName;
};

#endif // STARTSCREEN_H
