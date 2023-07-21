// Auto-generated module | 2026-05-13T20:50:20.611983
#include <iostream>
#include <vector>

int compute_348() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_348() << std::endl;
    return 0;
}
