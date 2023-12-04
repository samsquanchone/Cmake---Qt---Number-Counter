#pragma once

#include <QMainWindow>
#include <QApplication>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QLabel>


class Checkable : public QMainWindow {

  

public:
    Checkable(QWidget* parent = nullptr);

private slots:
    void toggleStatusbar();

private:
    QAction* viewst;
    QStatusBar* status;

    Q_OBJECT
};