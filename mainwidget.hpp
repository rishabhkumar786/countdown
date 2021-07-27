#ifndef MAINWIDGET_HPP
#define MAINWIDGET_HPP

#include <QWidget>
#include "timerlabel.hpp"

class MainWidget : public QWidget {
	Q_OBJECT
	
	public:
		explicit MainWidget(QWidget *parent = 0);
		~MainWidget();

	protected:
		void timerEvent(QTimerEvent *e);

	private:
		TimerLabel *t;
};

#endif
