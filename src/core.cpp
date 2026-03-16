// Auto-generated module | 2026-05-12T04:51:26.629860
#include <iostream>
#include <vector>

int compute_262() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_262() << std::endl;
    return 0;
}
