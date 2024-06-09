#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../sources/Database.h"
#include "../sources/startscreen.h"
#include "../sources/dbsimulation.h"
#include <memory>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(int userId,
                        QString userName,
                        QWidget *parent = nullptr);
    ~MainWindow();
    static MainWindow* creteClient();
    static int kInstanceCount;
private slots:
    void on_actionOpen_another_client_triggered();
    void on_actionExit_triggered();
    void on_sendMessageButton_clicked();
    void on_privateMessageButton_clicked();
    void on_messageLineEdit_returnPressed();
    void updateChats();
private:
    Ui::MainWindow *ui;
    int m_userId;
    QString m_userName;
};

#endif // MAINWINDOW_H
