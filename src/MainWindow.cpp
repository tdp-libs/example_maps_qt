#include "example_maps_qt/MainWindow.h"

#include "tp_qt_maps_widget/MapWidget.h"

#include "tp_maps_example/BuildExample.h"

#include "tp_maps/controllers/GraphController.h"

#include "tp_utils/DebugUtils.h"

#include <QBoxLayout>

namespace example_maps_qt
{

//##################################################################################################
struct MainWindow::Private
{
  TP_REF_COUNT_OBJECTS("general_performance_stats_viewer::MainWindow::Private");
  TP_NONCOPYABLE(Private);

  MainWindow* q;

  tp_qt_maps_widget::MapWidget* mapWidget{nullptr};

  //################################################################################################
  Private(MainWindow* q_):
    q(q_)
  {

  }
};

//##################################################################################################
MainWindow::MainWindow():
  d(new Private(this))
{
  setWindowTitle("Performance Stats Viewer");

  auto l = new QVBoxLayout(this);
  l->setContentsMargins(0,0,0,0);

  d->mapWidget = new tp_qt_maps_widget::MapWidget();
  l->addWidget(d->mapWidget);

  d->mapWidget->setAnimationInterval(16);

  tp_maps_example::buildExample(d->mapWidget->map());
}

//##################################################################################################
MainWindow::~MainWindow()
{
  delete d;
}

}
