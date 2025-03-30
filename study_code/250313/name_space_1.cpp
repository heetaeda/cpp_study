#include <iostream>
#include "../../header_file/header1.h"
#include "../../header_file/header2.h"

/*
해당 코드에서 header1 이라는 namespace 를 사용하므로
header1.h 파일의 header1 namespace 에 있는 함수 foo() 사용 시
namespace 를 명시적으로 지정하지 않고도 사용 가능

물론 header2.h 파일의 header2 namespace 에 있는 foo() 함수는
앞에 header2 라는 namespace 를 명시해줘야 함.
*/

// using namespace header1;

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
    std::cout << "반환 값 = " << header1::func_2() << std::endl;
    // std::cout << "반환 값 = " << func_1() << std::endl;
    return 0;
}