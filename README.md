# Example of tp_maps in Qt
This program demonstrates how to use tp_maps in a Qt widgets application.

## Prerequisites 
* [General machine installation](https://github.com/tdp-libs/general_machine_installation)
* tp_tools [Installation instructions](https://github.com/tdp-libs/tp_tools)
* A toolchain for your chosen platform. [Installation instructions](https://github.com/tdp-libs/tp_build)
* Qt Creator

## Clone Instructions
These steps will clone the repo and all of its dependencies. You will need tp_tools in your path for 
this to work.
```
mkdir maps_qt
cd maps_qt
git clone https://github.com/tdp-libs/example_maps_qt.git
cp example_maps_qt/maps_qt.pro .
tpUpdate

```

## Include and Library Paths
Depending on your platform you may need to specify include and library paths. The previous steps 
should have created a `performance_stats_viewer/project.inc` file, this can be modified to add 
platform specific include and library paths. If these modifications may be of use to someone else 
then they can be added to the project.inc file found in `maps_qt/example_maps_qt/` directory.

## QMake Build Instructions
To build and deploy the application using QtCreator perform the following steps.
1. Open the top level maps_qt.pro file in QtCreator.
2. Select a kit.
3. Edit `maps_qt/project.inc` to suit your system.
4. Click the green arrow in the bottom left to build and run.

