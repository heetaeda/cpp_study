#include <iostream>

/*
연습문제 1.3 
표준 출력에 "Hello, World" 를 출력하는 프로그램
*/
// int main() {
//     std::cout << "Hello, World" << std::endl;
//     return 0;
// }

/*
연슴문제 1.4
cin_cout.cpp 프로그램이 곱을 출력하도록 * 연산자 사용
*/
int main() {
    std::cout << "Enter two numbers : " << std::endl;
    int v1 = 0, v2 = 0;  // 변수 지정 후 초기화
    std::cin >> v1 >> v2;  // v1, v2 순서로 입력받음.
    std::cout << "The multiple of " << v1 << " and " << v2
    << " is " << v1 * v2 << std::endl;
    return 0;
} 

/*
연슴문제 1.5
연습문제 1.4 의 출력을 긴 문장이 아닌 각 피연산자별로 출력하도록 수정
*/
// int main() {
//     std::cout << "Enter two numbers : " << std::endl;
//     int v1 = 0, v2 = 0;  // 변수 지정 후 초기화
//     std::cin >> v1 >> v2;  // v1, v2 순서로 입력받음.
//     std::cout << "The multiple of ";
//     std::cout << v1;
//     std::cout << " and ";
//     std::cout << v2;
//     std::cout<< " is ";
//     std::cout << v1 * v2;
//     std::cout << std::endl;
//     return 0;
// } 

/*
연슴문제 1.6
프로그램 수정하기
각 출력줄의 세미 콜론 (;) 을 제거해야 함.
혹은, 맨 앞에 std::cout 객체 추가하기.
*/
// int main() {
//     std::cout << "Enter two numbers : " << std::endl;
//     int v1 = 0, v2 = 0;  // 변수 지정 후 초기화
//     std::cin >> v1 >> v2;  // v1, v2 순서로 입력받음.
//     std::cout << "The multiple of " << v1;
//     std::cout << " and " << v2;
//     std::cout << " is " << v1 * v2 << std::endl;
//     return 0;
// } 

// int main() {
//     std::cout << "/*";
//     std::cout << "*/";
//     std::cout << /* "*/" */";
//     std::cout << /* "*/" * "/*" */;
// }