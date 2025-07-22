// Auto-generated module | 2026-05-12T04:19:31.926480
#include <iostream>
#include <vector>

int compute_789() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_789() << std::endl;
    return 0;
}
