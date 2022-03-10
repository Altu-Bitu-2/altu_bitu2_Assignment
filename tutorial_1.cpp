#include <iostream>				//전처리 지시자    드래그 후 f12누르면 std관련 함수들 정의된거 볼 수 있음

/* c에서는 h 헤더 파일을 전처리 지시자로 사용했는데 c++에서는 헤더파일 확장자 안씀 */

using namespace std;		

/*
using namespace std 가 없으면 
	std::cout << "Hello, World!" << std::endl 
	std써줘야됨 <--ios stream의 std관련 함수들 쓰려면 std 작성 필요
*/

int main() {

	cout << "Hello,World!" << endl;
	//cout 뒤에있는 문장을 출력, endl은 줄바꿈 역할
	//<< : 데이터의 흐름, 방향을 의미







	return 0;
}