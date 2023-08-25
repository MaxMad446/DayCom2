// Auto-generated module | 2026-05-13T20:53:12.909475
#include <iostream>
#include <vector>

int compute_595() {
    int base = 121;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_595() << std::endl;
    return 0;
}
