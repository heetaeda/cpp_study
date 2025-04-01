#include <iostream>
#include "../../header_file/nameless_namespace.h" // 이름 없는 namespace 정의된 헤더 파일

namespace {
    int OnlyInThisFile() {
        return 50;
    }
    int only_in_this_file = 10;
}

// std 네임스페이스를 사용한다고 선언했으므로, 
// 해당 네임스페이스 안에 있는 cout, endl 등을 사용시 'std::' 를 사용하지 않아도 됨.
using namespace std;

int main() {
    cout << "맨 처음 값 : " << only_in_namespace_file << endl;
    only_in_namespace_file = 4;
    cout << "두 번째 값 : " << only_in_namespace_file << endl;
    cout << "함수 값 : " << OnlyInNamespacFile() << endl;
    return 0;
}