#pragma once

#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QLayout>
#include "Buttons/QuitButton.h"

class PlusMinus : public QWidget
{
public:
	PlusMinus(QWidget* parent = nullptr);

	Q_OBJECT//Macro for creating custom signals


private slots:
	void OnPlus();
	void OnMinus();

private:
	QLabel* label;

};