/*
 * Canon.h
 *
 *  Created on: 04/set/2012
 *      Author: pez
 */

#ifndef CANON_H_
#define CANON_H_

class Canon {
public:
	Canon(int irLedPin);
	~Canon();
	void photoNow();
	void photoDelayed();
private:
	static const unsigned BURST_PULSE_DURATION = 10; /* microseconds */
	static const unsigned PHOTO_NOW_TIME = 7330; /* microseconds */
	static const unsigned PHOTO_DELAYED_TIME = 5360; /* microseconds */
	const int irLedPin_;
};

#endif /* CANON_H_ */
