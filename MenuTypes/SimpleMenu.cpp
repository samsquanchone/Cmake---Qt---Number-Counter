#include "SimpleMenu.h"


//Main windows intrinsicly have a menu bar so we can add to them easily
SimpleMenu::SimpleMenu(QWidget* parent) : QMainWindow(parent)
{
	auto* quit = new QAction("&Quit", this); //Create a new action with text and set its parent as this window

	QMenu *file = menuBar()->addMenu("&file"); //Create a new menu bar entry called file

	file->addAction(quit); //Add are created action to the menu bar

	connect(quit, &QAction::triggered, qApp, QApplication::quit); //Connect our quit action to call the global quit function on trigger


	//auto plusMinus = new PlusMinus(this);


}
