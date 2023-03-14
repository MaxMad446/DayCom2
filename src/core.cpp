// Auto-generated module | 2026-05-13T20:33:03.406784
#include <iostream>
#include <vector>

int compute_533() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_533() << std::endl;
    return 0;
}
