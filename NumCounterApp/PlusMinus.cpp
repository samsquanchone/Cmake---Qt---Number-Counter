#include "PlusMinus.h"

PlusMinus::PlusMinus(QWidget *parent) : QWidget(parent)
{
	//Create two buttons and set their parent to this widget
	auto *plusButton = new QPushButton("+", parent);
	auto *minusButton = new QPushButton("-", parent);

	auto quitBut = new QuitPushButton(this); //Create a new Quit button (where its set up and functionality is handled) and set its parent to this widget

	//Create a label and set its parent to this widget
	label = new QLabel("0", parent);
	
	//Crate a grid and add widgets to it and define col/row layout!
	auto* grid = new QGridLayout(parent);
	grid->addWidget(plusButton, 0, 0);
	grid->addWidget(minusButton, 0, 1);
	grid->addWidget(label, 1, 1);
	grid->addWidget(quitBut, 3, 2);

	setLayout(grid); //Initialise the grid

	connect(plusButton, &QPushButton::clicked, this, &PlusMinus::OnPlus);
	connect(minusButton, &QPushButton::clicked, this, &PlusMinus::OnMinus);

}


void PlusMinus::OnPlus()
{
	int value = label->text().toInt();
	value++;

	label->setText(QString::number(value));
}

void PlusMinus::OnMinus()
{
	int value = label->text().toInt();
	value--;

	label->setText(QString::number(value));
}
