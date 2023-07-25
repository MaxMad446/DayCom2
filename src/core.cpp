// Auto-generated module | 2026-05-13T20:50:37.557106
#include <iostream>
#include <vector>

int compute_763() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
