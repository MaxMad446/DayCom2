// Auto-generated module | 2026-05-12T20:48:26.680486
#include <iostream>
#include <vector>

int compute_526() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_526() << std::endl;
    return 0;
}
