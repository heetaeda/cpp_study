#include <iostream>
#include "../../header_file/header1.h"  // header1.h 파일의 header1 namespace 사용 가능
#include "../../header_file/header2.h"  // header2.h 파일의 header2 namespace 사용 가능

// header1::foo() = 1
// header1::foo() = 2

/*
header1.h 파일의 header1 namespace 를 그대로 사용하므로 header1:: 을 명시하지 않아도 됨.ADJ_OFFSET_SINGLESHOT
header2.h 파일의 header2 namespace 를 사용하는 경우, header2:: 를 명시해야 함.ADJ_OFFSET_SINGLESHOT

물론 해당 코드의 namespace 이름을 다른 이름으로 바꿀 경우, 
header1:: 도 명시해야 함.
*/

namespace header1 {
    int func_1()
    {
        return foo();  // 자동으로 hearder1 namespace 의 foo() 가 실행
    }

    int func_2()
    {
        return header2::foo();  // header1 namespace 안에 있으므로 header2 namespace 를 따로 지정해야 함.
    }
}

int main() {
    std::cout << "반환 값 " << header1::func_2() << std::endl;
    return 0;
}

