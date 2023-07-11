// Auto-generated module | 2026-05-13T20:49:37.616029
#include <iostream>
#include <vector>

int compute_595() {
    int base = 229;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_595() << std::endl;
    return 0;
}
