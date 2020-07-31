// Auto-generated module | 2026-05-11T19:37:14.401257
#include <iostream>
#include <vector>

int compute_247() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}
