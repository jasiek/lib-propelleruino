/**
 * @file Serial.h
 * @brief Provides Arduino Serial funtions on the Propeller
 *
 * Copyright (c) 2013 by Martin Heermance
 * MIT Licensed
 */

#ifndef Serial_h
#define Serial_h

class Serial_
{
public:
	void begin(uint16_t baud_count);
	void end(void);
  void println(const char * str);
};
extern Serial_ Serial;
#endif