#include "Skeleton.h"

Skeleton::Skeleton(QWidget* parent) : QMainWindow(parent)
{
	//Create images with qrc files to add relative paths
	QPixmap newPix(":/Resources/Resources/openIcon.png");
	QPixmap openPix(":/Resources/Resources/newIcon.png");
	QPixmap quitPix(":/Resources/Resources/exit.png");


	auto* quit = new QAction("&Quit", this); //Create a new action with text and set its parent as this window

	QMenu* file = menuBar()->addMenu("&File");
	file->addAction(quit);

	QToolBar* toolbar = addToolBar("main toolbar");
	toolbar->addAction(QIcon(newPix), "New File");
	toolbar->addAction(QIcon(openPix), "Open File");
	toolbar->addSeparator();

	QAction* quit2 = toolbar->addAction(QIcon(quitPix),
		"Quit Application");
	connect(quit2, &QAction::triggered, qApp, &QApplication::quit);

	//auto* edit = new QTextEdit(this);


	//Create instance of our plus minus widget and add it as a central widget of this main window
	auto plusMinus = new PlusMinus(this);

	setCentralWidget(plusMinus);

	statusBar()->showMessage("Ready");


}
