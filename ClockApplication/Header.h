#include <ctime>
#include<cmath>
#include<exception>
using namespace System;
using namespace System::Windows::Forms;
ref class Clock {
internal:
	static int min, hou, sec;
public:

	void Init(int hou1, int min1, int sec1 ){
		if (hou1 < 0 || hou1>23 || min1 < 0 || min1>60 || sec1 < 0 || sec1>60)
		{
			throw gcnew Exception();
		}
		min = min1;
		sec = sec1;
		hou = hou1;
	}

	void InitUser(int hou1, int min1, int sec1)
	{
		
		sec++;
		
		if (sec==60)
		{
			min++;
			sec = 0;
		}
		if (min == 60)
		{
			
			if (hou == 24 && min == 60 && sec == 60)
			{
				min = 0;
				hou = 1;
			}
			hou++;
			min = 0;
		}
		
	}
	
	Clock() {
	}
	Clock(int hou1, int min1, int sec1) {
		Init(hou1, min1, sec1);
	}
	Clock(Clock^ c) {
		min = c->min;
		sec = c->sec;
		hou = c->hou;
	}
	void get_time() {

		time_t seconds = time(0); //кол-во секунд, прошщедщего с 1-го января 1970
		struct tm lt;
		localtime_s(&lt, &seconds); //часы, мин, сек
		min = lt.tm_min;
		sec = lt.tm_sec;
		hou = lt.tm_hour;
	}
	virtual double get_X() {
		return 0;
	}
	virtual double get_Y() {
		return 0;
	}

	
};
ref class PointHou :public Clock {
public:
	double get_X()override {
		return 150 + 55 * sin(2 * 3.14F*(hou * 60 + min) / 12 / 60);
	}
	double get_Y()override {
		return 150 - 55 * cos(2 * 3.14F*(hou * 60 + min) / 12 / 60);
	}
};
ref class PointMin :public Clock {
public:

	double get_X()override {
		return  150 + 90 * sin(2 * 3.14F* min / 60);
	}
	double get_Y()override {
		return  150 - 90 * cos(2 * 3.14F* min / 60);
	}
};
ref class PointSec :public Clock {
public:

	double get_X()override {
		return 150 + 125 * sin(2 * 3.14F* sec / 60);
	}
	double get_Y()override {
		return 150 - 125 * cos(2 * 3.14F* sec / 60);
	}
};
