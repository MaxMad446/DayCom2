// Auto-generated module | 2026-05-12T04:19:14.741118
#include <iostream>
#include <vector>

int compute_951() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
