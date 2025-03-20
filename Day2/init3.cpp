//#include <iostream>
//
//class CTime {
//private:
//	int m_hour{ 0 };
//	int m_min{ 0 };
//	int m_sec{ 0 };
//public:
//	CTime() { std::cout << "기본 생성자 호출" << std::endl; }		// 디폴트 생성자
//	CTime(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s) {	// 콜론 초기화, 이니셜라이져 리스트
//		std::cout << "입력 3개 받는 생성자 호출" << std::endl;
//		//m_hour = h;
//		//m_min = m;
//		//m_sec = s;
//	}
//
//	void setTime(int hour, int min, int sec) {
//		m_hour = hour;
//		m_min = min;
//		m_sec = sec;
//	}
//	
//	void showTime() const {
//		std::cout << "현재 시간은 " << m_hour << ":" << m_min << ":" << m_sec << " 입니다." << std::endl;
//	}
//};
//
//int main() {
//	CTime now;	// CTime now = CTime();
//	now.showTime();
//
//	CTime t(15, 30, 30); // CTime t = {15, 30, 30};  // CTime t{15, 30, 30};
//	t.showTime();
//
//	return 0;
//}