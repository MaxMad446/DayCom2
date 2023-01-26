// Auto-generated module | 2026-05-11T21:36:27.937145
#include <iostream>
#include <vector>

int compute_538() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_538() << std::endl;
    return 0;
}
