#include <iostream>

int main() {
    int sum = 0, val = 1;
    // val 가 10 이하면 실행됨.
    while (val <= 10)
    {
        sum += val;
        val++;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}

/*
while 문을 통해 1 부터 10 까지의 수를 더하는 프로그램
while 조건문이 참이 되는 동안 계속 실행됨.

val 값이 10보다 작으면 while 문이 반복 실행
val 값이 10보다 커지면 (11이 되는 순간) while 문을 빠져나옴.
*/