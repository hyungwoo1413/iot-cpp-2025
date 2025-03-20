//#include <iostream>
//
//class Time {
//private:
//	int hour;
//	int min;
//	int sec;
//public:
//	Time() {
//
//	}
//	
//	Time(int abssec) {
//		hour = abssec / 3600;
//		min = (abssec / 60) & 60;
//		sec = abssec % 60;
//	}
//
//	void printTime() {
//		printf("현재시간은 %d시 %d분 %d초 입니다.\n", hour, min, sec);
//	}
//
//};
//
//int main() {
//	Time now = 9999; // Time now(9999);
//	now.printTime();
//
//	return 0;
//}