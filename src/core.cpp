// Auto-generated module | 2026-05-13T20:36:10.912457
#include <iostream>
#include <vector>

int compute_560() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_560() << std::endl;
    return 0;
}
