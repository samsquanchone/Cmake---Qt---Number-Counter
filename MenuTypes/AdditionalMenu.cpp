#include "AdditionalMenu.h"

AdditionalMenu::AdditionalMenu(QWidget* parent) : QMainWindow(parent)
{
	//Create images with qrc files to add relative paths
	QPixmap newPix(":/Resources/Resources/openIcon.png");
	QPixmap openPix(":/Resources/Resources/newIcon.png");
	QPixmap quitPix(":/Resources/Resources/exit.png");

	//Create actions which are based from the pictures 
	auto *newAction = new QAction(newPix, "&New", this);
	auto *openAction = new QAction(openPix, "&Open", this);
	auto *quitAction = new QAction(quitPix, "&Quit", this);

	//Create a quit keyboard shortcut
	quitAction->setShortcut(tr("CTRL+Q"));


	//Create a menu and add the actions to it
	QMenu* file = menuBar()->addMenu("&File");
	file->addAction(newAction);
	file->addAction(openAction);
	file->addSeparator();
	file->addAction(quitAction);

	//Set attribute to show menu icons
	qApp->setAttribute(Qt::AA_DontShowIconsInMenus, false);


	//Connect quit action to quitting the application on trigger
	connect(quitAction, &QAction::triggered, qApp, &QApplication::quit);

}