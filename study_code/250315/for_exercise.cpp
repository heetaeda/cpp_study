#include <iostream>

// 연습 문제
/*
1.12 다음 for 루프에서 하는 일이 무엇이며, sum 의 마지막 값은?
예상 답 = 0 
*/

// int main() {
//     int sum = 0;
//     for (int i = -100; i <= 100; i++)
//     {
//         sum += i;
//     }
//     std::cout << "Last sum is " << sum << std::endl;
// }

/*
1.13 1.4.1 절의 연습 문제들을 for 문을 이용해 다시 작성
*/

// for 를 사용해 50 부터 100 까지의 수를 더하는 프로그램 
// int main() {
//     int sum = 0;
//     for (int i = 50; i <= 100; i++)
//     {
//         sum += i;
//     }
//     std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
// }

// 감소 연산자를 사용해 10 부터 0 까지의 수를 출력하는 for 문 작성
// int main() {
//     std::cout << "Number from 10 to 0 is " << std::endl;
//     for (int i = 10; i >= 0; i--)
//     {
//         std::cout << i << " ";
//     }
//     std::cout << std::endl;
// }

// 사용자에게 입력받은 두 정수의 범위 내에 있는 수를 출력하는 for 문 프로그램
// int main() {
//     std::cout << "Input 2 digits for setting period : " << std::endl;
//     int start, end;
//     std::cin >> start >> end;
//     std::cout << "Numbers between " << start << " and " << end << std::endl;
//     for (int i = start; i <= end; i ++)
//     {
//         std::cout << i << " ";
//     }
//     std::cout << std::endl;
//     return 0;
// }

// // 재귀함수 사용
void get_range(int start, int end)
{
    if (start > end)
    {
        std::cout << "change start end" << std::endl;
        get_range(end, start);
    }

    for (int i = start; i <= end; i++)
    {
        std::cout << i << " ";
    }
}

int main() {
    std::cout << "Input 2 digits for setting period : " << std::endl;
    int start, end;
    std::cin >> start >> end;
    std::cout << "Numbers between " << start << " and " << end << std::endl;
    get_range(start, end);
    std::cout << std::endl;
    return 0;
}

// int main() {
//     int sum = 0;
//     for (int i = 1; i <= 10; i++)
//     {
//         sum += i;
//     }
//     std::cout << "Sum 1 to 10 is " << sum << std::endl;

//     return 0;
// }
