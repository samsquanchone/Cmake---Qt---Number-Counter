#include "QuitButton.h"

//If wanting to crate a widget from another we can create the object and pass the argument in to use as a parent
QuitPushButton::QuitPushButton(QWidget* parent) : QWidget(parent)
{
	auto* quitButton = new QPushButton("QUIT", parent); //Create a new text button setting its text and parent to this widget

	quitButton->setGeometry(50, 100, 75, 30); //Set absolute value of the button

	connect(quitButton, &QPushButton::clicked, qApp, &QApplication::quit); //Create a signal from q button on event clicked which quits the application 



}