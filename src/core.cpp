// Auto-generated module | 2026-05-14T18:26:12.939442
#include <iostream>
#include <vector>

int compute_538() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_538() << std::endl;
    return 0;
}
