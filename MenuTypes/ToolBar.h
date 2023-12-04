#pragma once 

#include <QMainWindow>
#include <QApplication>
#include <QToolBar>
#include <QIcon>
#include <QAction>

class ToolBar : public QMainWindow
{
	Q_OBJECT
public:

	ToolBar(QWidget* parent = nullptr);
};

