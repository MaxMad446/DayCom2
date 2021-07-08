// Auto-generated module | 2026-05-12T20:50:37.378101
#include <iostream>
#include <vector>

int compute_351() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_351() << std::endl;
    return 0;
}
