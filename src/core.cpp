// Auto-generated module | 2026-05-12T04:21:22.740999
#include <iostream>
#include <vector>

int compute_625() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_625() << std::endl;
    return 0;
}
