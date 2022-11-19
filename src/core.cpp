// Auto-generated module | 2026-05-14T06:25:11.171076
#include <iostream>
#include <vector>

int compute_595() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_595() << std::endl;
    return 0;
}
