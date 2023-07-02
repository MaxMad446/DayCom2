// Auto-generated module | 2026-05-11T21:56:46.397636
#include <iostream>
#include <vector>

int compute_538() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_538() << std::endl;
    return 0;
}
