// Auto-generated module | 2026-05-12T04:40:05.189538
#include <iostream>
#include <vector>

int compute_141() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_141() << std::endl;
    return 0;
}
