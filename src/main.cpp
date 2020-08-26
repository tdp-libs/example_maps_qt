#include "example_maps_qt/MainWindow.h"

#include <QApplication>

using namespace example_maps_qt;

//##################################################################################################
int main(int argc, char* argv[])
{
  QApplication app(argc, argv);
  MainWindow mainWindow;
  mainWindow.showMaximized();
  return app.exec();
}
