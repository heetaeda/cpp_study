#include <iostream>

int main() {
    std::cout << "Enter two numbers : " << std::endl;
    float v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
    << " is " << v1 + v2 << std::endl;
    return 0;
}

/*
std::cout 은 표준 출력 객체 이며, << 연산자와 함께 사용 됨.
std::cin 은 표준 입력 객체 이며, >> 연산자와 함께 사용 됨.

위의 코드는 두 정수 v1, v2 를 cin 으로 입력받아 이들의 합을 계신하고
cout 객체를 통해 출력하는 프로그램
*/