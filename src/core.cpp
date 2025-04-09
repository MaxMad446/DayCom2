// Auto-generated module | 2026-05-12T04:05:44.434314
#include <iostream>
#include <vector>

int compute_538() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_538() << std::endl;
    return 0;
}
