#include "timerlabel.hpp"

TimerLabel::TimerLabel(
	unsigned int _hh,
	unsigned int _mm,
	unsigned int _ss
) :
	hh(_hh),
	mm(_mm),
	ss(_ss),
	QLabel(tr("%1:%2:%3").arg(_hh).arg(_mm).arg(_ss))
{}

int TimerLabel::update() {
	if (decrement()) return 1;

	setText(tr("%1:%2:%3").arg(hh).arg(mm).arg(ss));
	return 0;
}

int TimerLabel::decrement() {
	if (ss) {
		ss--;
	} else if (mm) {
		ss = 59;
		mm--;
	} else if (hh) {
		ss = 59;
		mm = 59;
		hh--;
	} else {
		return 1;
	}

	return 0;
}
	
