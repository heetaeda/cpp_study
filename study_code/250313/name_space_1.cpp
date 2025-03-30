#include <iostream>
#include "../../header_file/header1.h"
#include "../../header_file/header2.h"

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