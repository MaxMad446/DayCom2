// Auto-generated module | 2026-05-12T20:40:31.689935
#include <iostream>
#include <vector>

int compute_986() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
