#include "Checkable.h"

Checkable::Checkable(QWidget* parent)
    : QMainWindow(parent) {

    viewst = new QAction("&View statusbar", this);
    viewst->setCheckable(true);
    viewst->setChecked(true);

    QMenu* file = menuBar()->addMenu("&File");
    file->addAction(viewst);

    status = new QStatusBar(this);

    /*Note by showing messages in this way on the status bar will not be permenant, you need to add a widget such as a label with statusBarName->addWidget(widgetName)
    and manually remove the widget when desired! */
    status->showMessage("Welcome!", 0);

    setStatusBar(status);
   

    connect(viewst, &QAction::triggered, this, &Checkable::toggleStatusbar);
}

void Checkable::toggleStatusbar() {

    if (viewst->isChecked()) {
        status->clearMessage();
        status->showMessage("Status Bar Active!", 0);
        status->show();
    }
    else {

        status->hide();
    }
}