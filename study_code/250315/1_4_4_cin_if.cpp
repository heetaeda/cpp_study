#include <iostream>

int main() {
    // currVal = 현재 값, val = 입력 값
    int currVal = 0, val = 0;
    
    if (std::cin >> currVal)  // 한 번만 실행
    {
        int cnt = 1;
        while (std::cin >> val)  // 정수가 입력될 떄마다 실행
        {
            if (val == currVal)
            {
                cnt += 1;
            }

            else
            {
                std::cout << "===" << currVal << " occurs " << cnt << " times " << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << "===" << currVal << " occurs " << cnt << " times " << std::endl;

    }

    return 0;
}

/*
입력되는 값과 현재 입력되어 있는 값들 비교해야 함.
입력되는 값 cin (val) 을 while 문의 조건으로만 사용하게 되면 
값이 입력될 떄마다 while 문이 처음부터 다시 돌기 떄문에 이전 값을 저장할 수 없음.
그러므로 맨 처음에 입력되어 있는 값 (currVal) 을 if 문의 조건으로 넣고, 
그 다음에 입력되는 값들은 해당 if 문안의 while 문에서 비교하도록 코드 작성.
*/