// Auto-generated module | 2026-05-12T06:20:09.629029
#include <iostream>
#include <vector>

int compute_499() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_499() << std::endl;
    return 0;
}
