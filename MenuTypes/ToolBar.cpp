#include "ToolBar.h"

ToolBar::ToolBar(QWidget* parent) : QMainWindow(parent)
{

	//Create images with qrc files to add relative paths
	QPixmap newPix(":/Resources/Resources/openIcon.png");
	QPixmap openPix(":/Resources/Resources/newIcon.png");
	QPixmap quitPix(":/Resources/Resources/exit.png");

	QToolBar *toolbar = addToolBar("Main Tool Bar");

	toolbar->addAction(QIcon(newPix), "New File");
	toolbar->addAction(QIcon(openPix), "Ope File");
	toolbar->addSeparator();

	QAction* quitAction = toolbar->addAction(QIcon(quitPix), "Quit Application");

	connect(quitAction, &QAction::triggered, qApp, QApplication::quit);


}