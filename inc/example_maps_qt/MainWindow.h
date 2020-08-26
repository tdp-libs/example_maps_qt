#ifndef example_maps_qt_MainWindow_h
#define example_maps_qt_MainWindow_h

#include "example_maps_qt/Globals.h"

#include <QWidget>

namespace example_maps_qt
{

//##################################################################################################
class MainWindow : public QWidget
{
public:
  //################################################################################################
  MainWindow();

  //################################################################################################
  ~MainWindow() override;

private:
  struct Private;
  friend struct Private;
  Private* d;
};

}

#endif
