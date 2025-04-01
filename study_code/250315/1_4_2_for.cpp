#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;
    
    return 0;
}

/*
for 문을 통해 1 부터 10 꺄지의 수를 더하는 프로그램
while 문과 달리 반복 횟수를 알고 있을 때 유용
*/