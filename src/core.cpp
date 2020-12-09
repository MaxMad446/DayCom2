// Auto-generated module | 2026-05-11T19:54:31.437774
#include <iostream>
#include <vector>

int compute_745() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
