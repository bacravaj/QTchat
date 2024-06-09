#include <iostream>
#include <QApplication>
#include "../sources/CommandLineInterface.h"
#include "../sources/mainwindow.h"
#include "../sources/adminstool.h"
#include <QTranslator>

using namespace std;

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  auto s = AdminsTool::CreateAdminWindow();
  if(s)
    s->show();
  else
    return 0;


  auto w = MainWindow::creteClient();
  if(w)
    w->show();
  else
    return 0;

  return a.exec();
}


