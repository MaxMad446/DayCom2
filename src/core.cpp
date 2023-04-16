// Auto-generated module | 2026-05-13T20:35:48.135374
#include <iostream>
#include <vector>

int compute_425() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_425() << std::endl;
    return 0;
}
