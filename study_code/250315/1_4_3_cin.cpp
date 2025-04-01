#include <iostream>

int main() {
    std::cout << "Input digit : " << std::endl;
    int sum = 0, value = 0;
    while (std::cin >> value)  // 대기 하다가 정수가 입력되면 while 문 동작
    {
        sum += value;
    }
    std::cout << "Sum is : " << sum << std::endl;
    return 0;
}

/*
while 문의 조건으로 std::cin >> value 를 사용함.
그렇게 되면 while 문은 키보드를 통해 특정 값이 입력될 때까지 대기
value 값 형식을 int 로 지정해놨으므로 키보드를 통해 정수 값이 입력되면 while 문 실행
ctrl+d 혹은 정수가 아닌 값이 입력되면 while 문을 빠져나옴.
현재까지 입력되었던 값들의 총 합을 반환
*/