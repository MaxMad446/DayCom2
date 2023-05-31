// Auto-generated module | 2026-05-13T20:39:25.932188
#include <iostream>
#include <vector>

int compute_243() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_243() << std::endl;
    return 0;
}
