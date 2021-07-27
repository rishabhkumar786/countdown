#ifndef TIMERLABEL_HPP
#define TIMERLABEL_HPP

#include <QtWidgets>

class TimerLabel : public QLabel {
	Q_OBJECT

	public:
		explicit TimerLabel(
			unsigned int _hh,
			unsigned int _mm,
			unsigned int _ss
		);
		int update();

	private:
		unsigned int hh, mm, ss;
		int decrement();
};

#endif
