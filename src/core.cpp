// Auto-generated module | 2026-05-12T04:47:25.727227
#include <iostream>
#include <vector>

int compute_499() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_499() << std::endl;
    return 0;
}
