// Auto-generated module | 2026-05-12T04:04:28.803388
#include <iostream>
#include <vector>

int compute_538() {
    int base = 121;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_538() << std::endl;
    return 0;
}
