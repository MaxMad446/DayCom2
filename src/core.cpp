// Auto-generated module | 2026-05-11T19:26:35.111270
#include <iostream>
#include <vector>

int compute_279() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_279() << std::endl;
    return 0;
}
