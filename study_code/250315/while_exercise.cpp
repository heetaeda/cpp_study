#include <iostream>

// 연습 문제
/*
1.9 while 을 사용해 50 부터 100 까지 수를 더하는 프로그램 작성
*/

// int main() {
//     int sum = 0, val = 50;
//     while (val <= 100)
//     {
//         sum += val;
//         val += 1;
//     }
//     std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
//     return 0;
// }


/*
1.10 감소 연산자를 사용해 10 부터 0 까지의 수를 출력하는 프로그램 작성
*/

// int main() {
//     std::cout << "Number from 10 to 0 is " << std::endl;
//     int cnt = 10;
//     while (cnt >= 0)
//     {
//         std::cout << cnt << " ";
//         cnt--;
//         // cnt -= 1;
//     }
//     std::cout << std::endl;
//     return 0;
// }

/*
1.11 사용자에게 입력 받은 두 정수의 범위 내에 있는 수를 출력하는 프로그램 작성
이는 첫 번째 입력된 수가 두 번째 입력된 수보다 작으면 실행되지 않음.
*/

// using namespace std;

// int main() {
//     cout << "Input 2 numbers for setting period : " << endl;
//     // int start = 0, end = 0;
//     int start, end;
//     cin >> start >> end;
//     cout << "Number between " << start << " and " << end << endl;
//     while (start <= end)
//     {
//         cout << start << " ";
//         start += 1;
//     }
//     cout << endl;
//     return 0;
// }

// ================ 재귀 함수 사용하기 =======================

using namespace std;

void get_range(int low, int high)
{
    if (low > high)  // 처음 값이 다음 값보다 크면
    {
        get_range(high, low);  // 함수 내부에 자기 자신을 사용 가능
    }

    while (low <= high)
    {
        cout << low++ << " ";
        // low += 1;
    }
}

int main() {
    int low, high;
    cout << "Input 2 digit for setting range : " << endl;
    cin >> low >> high;
    get_range(low, high);
    cout << endl;

    return 0;
}