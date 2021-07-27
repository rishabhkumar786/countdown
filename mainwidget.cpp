#include "mainwidget.hpp"

MainWidget::MainWidget(QWidget *parent) : QWidget(parent) {
	t = new TimerLabel(0, 39, 12);
	QGridLayout *mainLayout = new QGridLayout;
	mainLayout->addWidget(t, 0, 0);
	setLayout(mainLayout);
	setWindowTitle(tr("qountdown"));
	startTimer(1000);
}

void MainWidget::timerEvent(QTimerEvent *e) {
	Q_UNUSED(e)

	t->update();
}

MainWidget::~MainWidget() {
	delete t;
}
